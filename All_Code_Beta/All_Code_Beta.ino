#include <MPU9250_asukiaaa.h> // Библиотека для гироскопа

#include <DueTimer.h> // Библиотеки для DUE
/*
    Timer 1 - Cчётчик времени
    Timer 2 - Таймер на прерывание
    Timer 3 - Таймер обороты двигателя
*/
#include <SPI.h>

#include <INextionTouchable.h> // Библиотеки для Nextion
#include <Nextion.h>
#include <NextionPage.h>
#include <NextionSlider.h>
#include <NextionButton.h>
#include <TrainData.h>

#define NEXTION_PORT Serial1 // Порт передачи Nextion
#define STP_pin 2 // Пин для передачи шага двигателя
#define DIR_pin 4 // Пин для направления двигателя
#define rope_in 0 //Смотка тросса // для установки - 0, напрямую - 1
#define rope_out 1 //Подача тросса //для установки - 1, напрямую - 0
#define test_inf 0 //Вывод показаний датчиков во время работы в порт
#define points  12 //Количество точек измерения

#define tnz100_pin  A0 // Пины тензо датчиков
#define tnz500_pin  A1
#define tnz1000_pin  A2

SPISettings settingsA(100000, MSBFIRST, SPI_MODE1); //Парамерты передачи по SPI для Сельсин датчика
MPU9250 mySensor; //Функция получения данных с гироскопа

//========================================================================= Перечисление компонентов Nextion

Nextion nex(NEXTION_PORT); //Инициализация порта  передачи данных Nextion

//==================================================== Страницы

NextionPage pgMM(nex, 0, 0, "Main Menu"); // Меню
NextionPage pgS(nex, 1, 0, "Settings");  // Настройки
NextionPage pgMC_1(nex, 2, 0, "Motor Control 1");  // Мотор 1
NextionPage pgT_100(nex, 3, 0, "100"); // Тензо 100
NextionPage pgT_500(nex, 4, 0, "500"); // Тензо 500
NextionPage pgT_1000(nex, 5, 0, "1000"); // Тензо 1000
NextionPage pgSelsin(nex, 6, 0, "Selsin"); //Сельсин
NextionPage pgGyro(nex, 7, 0, "Gyro"); // Гироскоп
NextionPage pgEX1(nex, 9, 0, "Exercise 1"); //Упражнение 1
NextionPage pgEX2(nex, 10, 0, "Exercise 2"); //Упражнение 2
NextionPage pgTP(nex, 11, 0, "Time Page"); //Задание времени на упражнение 2
NextionPage pgC(nex, 12, 0, "Coiling"); //Смотка, намотка
NextionPage pgEX3(nex, 13, 0, "Exercise 3"); //Упражнение 3
//==================================================== Кнопки

NextionButton MC1_Start(nex, 2, 7, "MC1_Start"); // Мотор 1, Старт
NextionButton MC1_Reverse(nex, 2, 8, "MC1_Reverse"); // Мотор 1, Реверс
NextionButton T100_Button_2(nex, 3, 6, " T100_Button_2"); //Старт показаний Тензо 100
NextionButton T500_Button_2(nex, 4, 6, " T500_Button_2"); //Старт показаний Тензо 500
NextionButton T1000_Button_2(nex, 5, 6, " T1000_Button_2"); //Старт показаний Тензо 1000
NextionButton SL_Button_2(nex, 6, 6, "SL_Button_2");  // Старт показаний сельсин датчика
NextionButton G_Button_2(nex, 7, 9, "G_Button_2"); // Старт показаний Гироскопа
NextionButton C_Button_2(nex, 12, 5, "C_Button_2"); // Смотка
NextionButton C_Button_3(nex, 12, 6, "C_Button_3"); // Намотка
NextionButton E_Button_1(nex, 8, 1, "E_Button_1"); //Упражнение 1
NextionButton E_Button_2(nex, 8, 3, "E_Button_2"); //Упражнение 2
NextionButton E_Button_3(nex, 8, 4, "E_Button_3"); //Упражнение 3
NextionButton EX1_Start(nex, 9, 2, "EX1_Start"); //Старт 1 упражнения
NextionButton EX2_Start(nex, 10, 2, "EX2_Start"); //Старт 2 упражнения
NextionButton EX3_Start(nex, 13, 2, "EX3_Start"); //Старт 3 упражнения
NextionButton EX1_Stop(nex, 9, 24, "EX1_Stop"); //Стоп 1 упражнения
NextionButton EX2_Stop(nex, 10, 24, "EX2_Stop"); //Стоп 2 упражнения
NextionButton EX3_Stop(nex, 13, 24, "EX3_Stop"); //Стоп 3 упражнения
NextionButton EX1_Button_Bac(nex, 9, 1, "EX_Button_Bac"); //Выход из упражнения 1
NextionButton EX2_Button_Bac(nex, 10, 1, "EX2_Button_Bac"); //Выход из упражнения 2
NextionButton EX3_Button_Bac(nex, 13, 1, "EX3_Button_Bac"); //Выход из упражнения 3
NextionButton TP_Button_Ok(nex, 11, 3, "TP_Button_Ok"); // Задание времени для упражнения 2


//==================================================== Слайдеры

NextionSlider MC1_Slider(nex, 2, 4, "sExSlider"); // Мотор 1, слайдер оборотов
NextionSlider TP_Slider(nex, 11, 2, "TP_Slider"); // Слайдер для задания врнемени упражнение 2

//========================================================================= Используемые переменные

int page = 0; // Номер страницы
int Ex_time = 0; // Таймер
int Ex_numbers = 0; // Кол-во повторений
int Pre_time = 0; // Время на выполнение упражнения
int flag = 0, state = 0, numb = 0; //Переменные для счётчиков/состояний
double Angle[100], Strength[100]; //Значения угла и силы

//=================================== Данные для двигателя

bool STP_value = 0; // Шаг двигателя
bool DIR_value = 0; // Направление
bool Motor_State = 0; // Вкл/выкл
int Freq_current = 0; // Частота оборотв двигателя
int Freq_end = 0; // Конечная частота оборотов
double Motor_Period = 0; // Переиод оборота вала двигателя

int M1_Freq = 0; // Частота оборотов двигателя
double M1_Period = 0; // Переиод оборота вала двигателя

//===================================  Данные для Сельсин датчика
double FullAngle = 0, Save_previous_angle = 0; //переменные для сельсин датчика угол, предыдущее значение угла
int divider = 1;  //Делитель для скалирования графика
uint8_t u8Count = 0, u8data = 0;
uint16_t u16multiTurn = 0, u16singleTurn = 0, u16Save_previousTurn = 0;
uint32_t u32result = 0;
double dAngle = 0, dRotations = 0; // угол и кол-во поворотов сельсин датчика (повороты от 0 до 4095)
//==================================================================================================================================================
//========================================================================= SETUP
void setup()
{
  //==================================================== Инициализация портов

  SPI.begin(); // Запуск SPI
  Serial.begin(115200); // Скорость порта SPI
  SPI.transfer(0);  //Очищение буфера SPI

  //==================================================== Инициализация двигателей

  pinMode(STP_pin, OUTPUT);
  pinMode(DIR_pin, OUTPUT);
  digitalWrite(STP_pin, STP_value);
  digitalWrite(DIR_pin, DIR_value);

  //==================================================== Инициализация гироскопа

  Wire.begin(); //Запуск порта передачи для гироскопа
  mySensor.setWire(&Wire);
  mySensor.beginAccel(); // Задание функции получения Accel

  //==================================================== Запуск таймеров оборотов двигателя

  Timer3.attachInterrupt(stp1_toggle);
  Timer3.setPeriod(Motor_Period);

  //==================================================== Инициализация функций Nextion

  NEXTION_PORT.begin(115200); // Скорость порта Nextion Serial 1
  nex.init(); // Инициализация Nextion

  Serial.println(MC1_Slider.attachCallback(&callback_MC1_Slider)); //Инициализация прерываний
  Serial.println(MC1_Start.attachCallback(&callback_MC1_Start));
  Serial.println(MC1_Reverse.attachCallback(&callback_MC1_Reverse));
  Serial.println(T100_Button_2.attachCallback(&callback_T100_Button_2));
  Serial.println(T500_Button_2.attachCallback(&callback_T500_Button_2));
  Serial.println(T1000_Button_2.attachCallback(&callback_T1000_Button_2));
  Serial.println(SL_Button_2.attachCallback(&callback_SL_Button_2));
  Serial.println(G_Button_2.attachCallback(&callback_G_Button_2));
  Serial.println(EX1_Start.attachCallback(&callback_EX1_Start));
  Serial.println(EX1_Stop.attachCallback(&callback_EX1_Stop));
  Serial.println(EX1_Button_Bac.attachCallback(&callback_EX1_Button_Bac));
  Serial.println(EX2_Start.attachCallback(&callback_EX2_Start));
  Serial.println(EX2_Stop.attachCallback(&callback_EX2_Stop));
  Serial.println(EX2_Button_Bac.attachCallback(&callback_EX2_Button_Bac));
  Serial.println(TP_Button_Ok.attachCallback(&callback_TP_Button_Ok));
  Serial.println(EX3_Start.attachCallback(&callback_EX3_Start));
  Serial.println(EX3_Stop.attachCallback(&callback_EX3_Stop));
  Serial.println(EX3_Button_Bac.attachCallback(&callback_EX3_Button_Bac));
  Serial.println(C_Button_2.attachCallback(&callback_C_Button_2));
  Serial.println(C_Button_3.attachCallback(&callback_C_Button_3));
  Serial.println(E_Button_1.attachCallback(&callback_E_Button_1));
  Serial.println(E_Button_2.attachCallback(&callback_E_Button_2));
  
  //====================================================

  SPI.begin(4);
  SPI.setClockDivider(4, SPI_CLOCK_DIV128); //Установка Clock
  Serial.println("  *** Setup complete ***  "); // Конец всех установок
  Serial.println(arc_in);
  for (int i = 0; i < 4; i++) Serial.print(arc_in_mass[i]);
  Serial.println();
  Serial.println(arc_fl);
  for (int i = 0; i < 6; i++) Serial.print(arc_txt[i]);
  Serial.println();
}

//========================================================================= Конец Setup
//==================================================================================================================================================

//==================================================================================================================================================
//========================================================================= Функция отправки данных на дисплей Nextion

void NexData(int ex, bool iter, bool prog ,int prog_del, bool t, int t_del, bool dir, bool freq,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
             bool sels, bool t_100, bool t_500, bool t_1000 )  //  Сельсин, тензо 100, тензо 500, тензо 100
{                                                                         
  if (iter == true)
  {
    NEXTION_PORT.print("EX"); // Отправка кол-ва повторений   
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_Num_val.val=");
    DataVal(Ex_numbers);
  }
        
  if (prog == true)
  {
    NEXTION_PORT.print("EX"); // Отправка выполнения упражнения
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_Bar_1.val=");
    DataVal(FullAngle / prog_del);
  }

  if (t == true)
  {
    NEXTION_PORT.print("EX"); // Отправка времени выполнения упрражнения
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_Time_val.val=");
    DataVal(Ex_time / t_del); //100 - для секунд
  }

    if (dir == true)
  {
    NEXTION_PORT.print("EX"); // Направление вращения двигателя
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_Text_6_val.val=");
    DataVal(DIR_value);
  }

  if (freq == true)
  {
    NEXTION_PORT.print("EX"); // Отправка частоты двигателя
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_Text_2.val=");
    DataVal(Freq_current);
  }

  if (sels == true)
  {
    Data(0, 6, Selsin()); // Отправка данных сельсина
    NEXTION_PORT.print("EX");
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_SL_val.val=");
    DataVal(FullAngle);
  }

  if (t_100 == true)
  {
    Data(0, 7, Tenzo(1)); // Отправка данных тензо 100
    NEXTION_PORT.print("EX");
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_TNZ100_val.val=");
    DataVal(Tenzo(1));
  }

  if (t_500 == true)
  {
    Data(1, 7, Tenzo(2) / 4); // Отправка данных тензо 500
    NEXTION_PORT.print("EX");
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_TNZ500_val.val=");
    DataVal(Tenzo(2));
  }

  if (t_1000 = true)
  {
    Data(2, 7, Tenzo(3) / 8); // Отправка данных тензо 1000
    NEXTION_PORT.print("EX");
    NEXTION_PORT.print(ex);
    NEXTION_PORT.print("_TNZ1T_val.val=");
    DataVal(Tenzo(3));
  }
}
//========================================================================= Конец функций
//==================================================================================================================================================

//==================================================================================================================================================
//========================================================================= Loop

void loop()
{
  nex.poll();
  //========================================================================= Считывание и построение графика Тензо 100
  switch (page)
  {
    case 3:
      {
        int tnz_value = Tenzo(1); // Данные тензо датчиков
        Data(0, 2, tnz_value * 2);
        NEXTION_PORT.print("T100_val_1.val=");
        DataVal(tnz_value);
        break;
      }

    //========================================================================= Считывание и построение графика Тензо 500

    case 4:
      {
        int tnz_value = Tenzo(2); // Данные тензо 500
        Data(0, 2, tnz_value / 2);
        NEXTION_PORT.print("T500_val_1.val=");
        DataVal(tnz_value);
        break;
      }

    //========================================================================= Считывание и построение графика Тензо 1000

    case 5:
      {
        int tnz_value = Tenzo(3); // Данные тензо 1000
        Data(0, 2, tnz_value / 4);
        NEXTION_PORT.print("T1000_val_1.val=");
        DataVal(tnz_value);
        break;
      }

    //========================================================================= Считывание данных и построение графика для Сельсин датчика

    case 6:
      {
        int Selsin_data = Selsin();
        Data(0, 2, Selsin_data); // Отправка данных на график Сельсина
        NEXTION_PORT.print("SL_val_1.val=");
        DataVal(FullAngle);
        break;
      }

    //========================================================================= Считывание и построение графиков гироскопа

    case 7:
      {

        float AccelX = 0; // Данные гироскопа
        float AccelY = 0;
        float AccelZ = 0;

        mySensor.accelUpdate();

        AccelX = 0;
        AccelY = 0;
        AccelZ = 0;

        AccelX = mySensor.accelX();
        AccelY = mySensor.accelY();
        AccelZ = mySensor.accelZ();

        Serial.print(AccelX);
        Serial.print(" ");
        Serial.print(AccelY);
        Serial.print(" ");
        Serial.println(AccelZ);

        if (AccelX > 0)  AccelX = 128 + (AccelX * 21); // Форматирование данных для вывода на график
        if (AccelX < 0)  AccelX = 128 - (-AccelX * 21);
        if (AccelX == 0)  AccelX = 128;

        if (AccelY > 0)  AccelY = 128 + (AccelY * 21);
        if (AccelY < 0)  AccelY = 128 - (-AccelY * 21);
        if (AccelY == 0)  AccelY = 128;

        if (AccelZ > 0)  AccelZ = 128 + (AccelZ * 21);
        if (AccelZ < 0)  AccelZ = 128 - (-AccelZ * 21);
        if (AccelZ == 0)  AccelZ = 128;

        Data(0, 2, AccelX);
        Data(1, 2, AccelY);
        Data(2, 2, AccelZ);
        break;
      }

    //========================================================================= Упражнение 1

    case 9:
    {
      int Selsin_data = Selsin(); //Данные сельсина
      int tnz_value_1 = Tenzo(1), tnz_value_2 = Tenzo(2), tnz_value_3 = Tenzo(3); // Данные тензо 100
      int end_angle = 200; //Конечный угол упражнения
      int del = end_angle/100;
      
      if ((FullAngle >= end_angle)&&(flag == 0)) state = 92; //Подача
      if ((FullAngle <= 0)&&(flag == 1)) state = 92; //Смотка
      
      switch (state)
      {
        case 91:
        {
                    
          if (tnz_value_1 > 5) //Проверка на усилие
          {
            Freq_current = tnz_value_1 * 30; // Расчёт скорости двигателя
            Motor_Period = (double)(1000000 / Freq_current);
            Timer3.start(Motor_Period);
            NEXTION_PORT.print("EX1_Text_2.val="); // Отправка данных двигателя упражнение 1
            DataVal(Freq_current);
          }

          if (tnz_value_1 < 5)
          {
            Freq_current = 0;
            Timer3.stop();
            NEXTION_PORT.print("EX1_Text_2.val="); // Отправка данных двигателя упражнение 1
            DataVal(0);
          }
          break;
        }
          
        case 92:
        { 
          Stop(1, 30, del, 100); // Номер упр, частота уменьшения, делитель первый, делитель второй            
          
          if (flag == 0) //Смотка
          {
            DIR_value = rope_in;
            digitalWrite(DIR_pin, rope_in);
            flag = 1;
          }
          else //Подача
          {
            Ex_numbers++; // Отправка кол-ва упражнений
            NEXTION_PORT.print("EX1_Num_val.val=");
            DataVal(Ex_numbers);
            DIR_value = rope_out;
            digitalWrite(DIR_pin, rope_out);
            flag = 0;
          }
          
          delay(2000);
          state = 91;
          break;        
        }
      }
      NexData(1, true, true, del, true, 100, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
                 true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100         
      break;
    }

//========================================================================= Упражнение 2

    case 10:
    {
      int n = 100; // Количество отрезков измерений
      int dt_time = Pre_time / n; // Отрезок времени между измерениями
      int Selsin_data = Selsin(); //Данные сельсина
      int tnz_value_1 = Tenzo(1), tnz_value_2 = Tenzo(2), tnz_value_3 = Tenzo(3); // Данные тензо 100
      int end_angle = 200; //Конечный угол упражнения
      int del = end_angle/100;
      
      switch(state)
      {
        
//========================================== Получение значений

        case 101:
        {
          if ((Pre_time > Ex_time) && (FullAngle < end_angle)) //Снятие данных
          {
            tnz_value_1 = Tenzo(1);
            Selsin_data = Selsin();
            
            if (tnz_value_1 > 5) //Проверка на усилие
            {
              Freq_current = tnz_value_1 * 30;
              Motor_Period = (double)(1000000 / Freq_current);
              Timer3.start(Motor_Period);
              NEXTION_PORT.print("EX2_Text_2.val="); // Отправка данных двигателя упражнение 2
              DataVal(Freq_current);
            }

            if (tnz_value_1 < 5)
            {
              Timer3.stop();
              NEXTION_PORT.print("EX2_Text_2.val="); // Отправка данных двигателя упражнение 2
              DataVal(0);
            }

            if ((Ex_time / (dt_time)) == (numb + 1)) // Занесение значений
            {
              Angle[numb] = FullAngle;
              Strength[numb] = tnz_value_1;
              numb++;
            }
            NexData(2, true, true, del, true, 100, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
             true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100     
          }
          else 
          {
            state = 102;
            Ex_numbers++;
          }
          break;
        }
        
//========================================== Вывод начений в порт, смотка тросса
 
        case 102:
        {
          StopAndWind(2, 30, 500, del, 100); // Номер упр, частота уменьшения, частота смотки, делите первый, делитель второй     

          if (test_inf == 1)
          {
            for (int i = 0; i < 100; i++) // Вывод полученных массивов в порт
            {
              Serial.println(Angle[i]);
            }

            for (int i = 0; i < 100; i++)
            {
              Serial.println(Strength[i]);
            }
          }
          Ex_numbers++;
          state = 103;
          numb = 0;
          break;
        }
         
//========================================== Начало выполнения упражнения, после получения значений
       
        case 103:
        {          
          if ((numb <= 100)&&((FullAngle < end_angle)))
          {
            tnz_value_1 = Tenzo(1);
            Selsin_data = Selsin(); // Angle[100], Strength[100]; 
            
            if ((tnz_value_1 >= Strength[numb])&&(FullAngle < Angle[numb+1])&&(tnz_value_1 > 5)) //Проверка на усилие
            {
              Freq_current = tnz_value_1 * 30;
              Motor_Period = (double)(1000000 / Freq_current);
              Timer3.start(Motor_Period);
              NEXTION_PORT.print("EX2_Text_2.val="); // Отправка данных двигателя упражнение 2
              DataVal(Freq_current);
            }

            if (FullAngle >= Angle[numb+1])
            {
              Timer3.stop();
              NEXTION_PORT.print("EX2_Text_2.val="); // Отправка данных двигателя упражнение 2
              DataVal(0);
              numb++;
            }
            NexData(2, true, true, del, true, 100, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
                 true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100                   
          }
          else state = 104;
          break;
        }
        
//========================================== Смотка тросса
        
         case 104:
         {
           Ex_numbers++;
           NEXTION_PORT.print("EX2_Num_val.val="); // Отправка кол-ва упражнений
           DataVal(Ex_numbers);
           StopAndWind(2, 30, 500, del, 100); // Номер упр, частота уменьшения, частота смотки, делите первый, делитель второй
           numb = 0;
           state = 103;
           break;
         }
//========================================== Конец выполнения упражнения
      }
    }

//========================================================================= Упражнение 2

    case 13:
    {
      int positions[points] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.99, 1}, // Положение
          phase[points] = {0, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 1},  // Время промежутка
          phase_koef[points] = {1, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 0.9667, 1}, // Коэффициент фазы
          tired_koef[points] = {1, 0.988, 0.975, 0.963, 0.950, 0.938, 0.925, 0.913, 0.900, 0.888, 0.875, 0.833}, // Коэффициент усталости  
          muscle_potenc[points]; // Потецниал мыщцы
          muscle_potenc[0] = 100;
          for(int i = 1; i < points; i++)
          {
            muscle_potenc[i] =  muscle_potenc[i-1]*tired_koef[i];
          }
      
      int Selsin_data = Selsin(); //Данные сельсина
      int tnz_value_1 = Tenzo(1), tnz_value_2 = Tenzo(2), tnz_value_3 = Tenzo(3); // Данные тензо 100
      int end_angle = 200; //Конечный угол упражнения
      int del = end_angle/100;
      
      break;
    }
    
//========================================================================= Конец
  }
}

//========================================================================= Конец Loop
//==================================================================================================================================================

//================================================================================================================================================== Отклики на нажатия Nextion
//========================================================================= Слайдера в меню двигателя 1

void callback_MC1_Slider(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_POP)
  {
    Freq_end = MC1_Slider.getValue();

    if (Freq_end > Freq_current)
    {
      Timer2.attachInterrupt(timer_interrupt_up).start(500); //Вызов функции на повышение оборотов
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      Motor_State = 1;
    }
    if (Freq_end < Freq_current)
    {
      Timer2.attachInterrupt(timer_interrupt_down).start(500);
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      Motor_State = 1;
    }
    if (Freq_current < 100) Timer3.stop();
  }
}

//========================================================================= Отклик на нажатие кнопки "Старт" в меню двигателя 1

void callback_MC1_Start(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {

    if (Motor_State == 0)
    {
      Serial.println("Button Start pressed");
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      Motor_State = 1;
      Timer3.start(Motor_Period);
    }

    else
    {
      Serial.println("Button Start unpressed");
      MC1_Start.setBackgroundColour(NEX_COL_GREEN);
      Motor_State = 0;
      Timer3.stop();
    }
  }
}

//========================================================================= Отклик на нажатие кнопки "Реверс" в меню двигателя 1

void callback_MC1_Reverse(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {

    if (DIR_value == rope_in)
    {
      Serial.println("Button Reverse pressed");
      MC1_Reverse.setBackgroundColour(NEX_COL_RED);
      DIR_value = rope_out;
      digitalWrite(DIR_pin, rope_out);
    }

    else
    {
      Serial.println("Button Reverse unpressed");
      MC1_Reverse.setBackgroundColour(NEX_COL_BLUE);
      DIR_value = rope_in;
      digitalWrite(DIR_pin, rope_in);
    }
  }
}

//========================================================================= Отклик на нажатие кнопки "Смотка"

void callback_C_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {

    if (Motor_State == 0)
    {
      DIR_value = rope_in;
      digitalWrite(DIR_pin, rope_in);
      Motor_State = 1;
      Timer3.start(500);
      NEXTION_PORT.print("C_Text_2.val="); // Отправка частоты
      DataVal(500);
    }

    else
    {
      NEXTION_PORT.print("C_Text_2.val="); // Отправка частоты
      DataVal(0);
      Motor_State = 0;
      Timer3.stop();
    }
  }
}

//========================================================================= Отклик на нажатие кнопки "Подача"

void callback_C_Button_3(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {

    if (Motor_State == 0)
    {
      DIR_value = rope_out;
      digitalWrite(DIR_pin, rope_out);
      Motor_State = 1;
      Timer3.start(500);
      NEXTION_PORT.print("C_Text_2.val="); // Отправка частоты
      DataVal(500);
    }

    else
    {
      NEXTION_PORT.print("C_Text_2.val="); // Отправка частоты
      DataVal(0);
      Motor_State = 0;
      Timer3.stop();
    }
  }
}

//========================================================================= Кнопка Старта Тензо 100

void callback_T100_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_PUSH) & (page == 3))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");
    page = 0;
    T100_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }

  else
  {
    page = 3;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    T100_Button_2.setBackgroundColour(NEX_COL_RED);
  }
}

//========================================================================= Кнопка Старта Тензо 500

void callback_T500_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_PUSH) & (page == 4))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");
    page = 0;
    T500_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }

  else
  {
    page = 4;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    T500_Button_2.setBackgroundColour(NEX_COL_RED);
  }
}

//========================================================================= Кнопка Старта Тензо 1000

void callback_T1000_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_POP) & (page == 5))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");
    page = 0;
    T1000_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }

  else
  {
    page = 5;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    T1000_Button_2.setBackgroundColour(NEX_COL_RED);
  }
}

//========================================================================= Запуск Старта сельсин датчика

void callback_SL_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_POP) & (page == 6))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");;
    page = 0;
    SL_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }

  else
  {
    page = 6;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    SL_Button_2.setBackgroundColour(NEX_COL_RED);
  }
}

//========================================================================= Кнопка Старта гироскопа

void callback_G_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_PUSH) & (page == 7))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");
    page = 0;
    G_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }

  else
  {
    page = 7;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    G_Button_2.setBackgroundColour(NEX_COL_RED);
  }
}

//========================================================================= Вход в упражнение 1

void callback_E_Button_1(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    DIR_value = rope_out;
    digitalWrite(DIR_pin, rope_out);
    flag = 0;
    state = 91;
  }
}

//========================================================================= Кнопка старт упражнения 1

void callback_EX1_Start(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    page = 9;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    Timer1.attachInterrupt(times).start(10000); // 10мс
  }

}

//========================================================================= Кнопка стоп упражнения 1

void callback_EX1_Stop(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    Timer3.stop();
    Timer1.stop();
    page = 0;
  }
}

//========================================================================= Выход из упражнения 1

void callback_EX1_Button_Bac(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    Timer3.stop(); // Таймер обороты двигателя
    Timer2.stop(); // Таймер на прерывание
    Timer1.stop(); // Cчётчик времени
    Ex_time = 0;
    Ex_numbers = 0;
    page = 0;
    FullAngle = 0;
    state = 0;
    flag = 0;
    DIR_value = rope_out;
    digitalWrite(DIR_pin, rope_out);
  }
}

//========================================================================= Вход в упражнение 2

void callback_E_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    DIR_value = rope_out;
    digitalWrite(DIR_pin, rope_out);
    numb = 0;
    state = 101;
  }
}

//========================================================================= Кнопка Старт упражнения 2

void callback_EX2_Start(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    page = 10;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    Timer1.attachInterrupt(times).start(10000); // 10 мс
    
  }
}


//========================================================================= Кнопка стоп упражнения 2

void callback_EX2_Stop(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    Serial.print("Button Stop on page ");
    Serial.print(page);
    Serial.println(" pressed");
    Timer3.stop();
    Timer1.stop();
    page = 0;
  }
}
//========================================================================= Выход из упражнения 2

void callback_EX2_Button_Bac(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    Timer3.stop(); // Таймер обороты двигателя
    Timer2.stop(); // Таймер на прерывание
    Timer1.stop(); // Cчётчик времени
    Ex_time = 0;
    Ex_numbers = 0;
    page = 0;
    FullAngle = 0;
    Pre_time = 0;
    state = 0;
    numb = 0;
    DIR_value = rope_out;
    digitalWrite(DIR_pin, rope_out);
    for (int i =0; i < 100; i++)
    {
      Angle[i] = 0;
      Strength[100] = 0;
    }
  }  
}

//========================================================================= Кнопка Старт упражнения 3

void callback_EX3_Start(NextionEventType type, INextionTouchable *widget)
{

}


//========================================================================= Кнопка стоп упражнения 3

void callback_EX3_Stop(NextionEventType type, INextionTouchable *widget)
{

}
//========================================================================= Выход из упражнения 3

void callback_EX3_Button_Bac(NextionEventType type, INextionTouchable *widget)
{

}
//========================================================================= Кнопка "Принять" на странице задания времени

void callback_TP_Button_Ok(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    Pre_time = TP_Slider.getValue() * 100;
    numb = 0;
  }
}

//=========================================================================
//===================================================================================================================================================== Конец отклики на нажатия Nextion

//===================================================================================================================================================== Функции
//=========================================================================  Функция отправки данных для графиков

void  Data (int channel, int id, int data)
{
  String Command = "add ";
  Command += id;
  Command += ",";
  Command += channel;
  Command += ",";
  Command += data;
  Command += "\xFF\xFF\xFF";
  NEXTION_PORT.print(Command);
}

//=========================================================================  Функция отправки данных для текстовых окон

void  DataVal (int data)
{
  String Command;
  Command += data;
  Command += "\xFF\xFF\xFF";
  NEXTION_PORT.print(Command);
}

//========================================================================= Прерывание на отправку данных двигателя

void stp1_toggle()
{
  STP_value = !STP_value;
  digitalWrite(STP_pin, STP_value);
}

//========================================================================= Остановка и смотка тросса

void StopAndWind (int ex, int minus, int wind, int del_1, int del_2)
{
  while (Freq_current != 0) //Остановка
  {
    Freq_current -= minus; // Уменьшение частоты
    if (Freq_current < 0) Freq_current = 0;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
    NexData(ex, true, true, del_1, true, del_2, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
      true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100
  }
    
  delay (2000);
  DIR_value = rope_in;
  digitalWrite(DIR_pin, rope_in);
  NEXTION_PORT.print("EX"); // Отправка направления
  NEXTION_PORT.print(ex);
  NEXTION_PORT.print("_Text_6.val=");
  DataVal(DIR_value);
  Selsin();

  while (FullAngle > 0) // Смотка
  {
    Selsin();
    Freq_current = wind;  // Частота смотки 
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
    NexData(ex, true, true, del_1, true, del_2, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
      true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100
  }
  
  Freq_current = 0;
  Motor_Period = (double)(1000000 / Freq_current);
  Timer3.start(Motor_Period);
  DIR_value = rope_out;
  digitalWrite(DIR_pin, rope_out);
  NEXTION_PORT.print("EX"); // Отправка направления   
  NEXTION_PORT.print(ex);
  NEXTION_PORT.print("_Text_6.val=");
  DataVal(DIR_value);
}

//========================================================================= Остановка и смотка тросса

void Stop (int ex, int minus, int del_1, int del_2)
{
  while (Freq_current != 0) //Остановка
  {
    Freq_current -= minus; // Уменьшение частоты
    if (Freq_current < 0) Freq_current = 0;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
    NexData(ex, true, true, del_1, true, del_2, true, true,  // Номер упражнения, кол-во повторений, выполнение упражнения/делитель, время выполнения/делитель, направления вращения, частота
      true, true, true, true);  //  Сельсин, тензо 100, тензо 500, тензо 100
  }
}

//========================================================================= Прерывание на повышение оборотов

void timer_interrupt_up()
{
  int up = 30;
  if (Freq_current + up > Freq_end)
  {
    Freq_current += Freq_end - Freq_current;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
    Timer2.stop();
  }
  if (Freq_current != Freq_end)
  {
    Freq_current += up;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
  }
}

//========================================================================= Прерывание на понижение оборотов

void timer_interrupt_down()
{
  int down = 30;
  if (Freq_current - down < Freq_end)
  {
    Freq_current -= Freq_current - Freq_end;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
    Timer2.stop();
  }
  if (Freq_current != Freq_end)
  {
    Freq_current -= down;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
  }
  if (Freq_current < 0)
  {
    Freq_current = 0;
    Motor_Period = (double)(1000000 / Freq_current);
    Timer3.start(Motor_Period);
  }
}

//========================================================================= Сельсин датчик

int Selsin()
{
  if ((dAngle == 0) && (u16multiTurn == 0))
  {
    u16Save_previousTurn = 0;
    FullAngle = 0;
    Save_previous_angle = 0;
  }

  SPI.beginTransaction(settingsA); // Начало передачи

  for (u8Count = 0; u8Count < 4; u8Count++) // Считывание 4 байт по 8 бит 4 раза
  {
    u32result <<= 8; // Сдвиг на 8 бит для записи нового байта
    u8data = SPI.transfer(0); // Приём байта
    u32result |= u8data; // Запись байта в общую передачу
  }

  SPI.endTransaction(); //Конец передачи

  u32result >>= 7; // Сдвиг на 7 бит для чтения данных

  u16singleTurn = u32result & 0x0FFF; // Запись данных об угле
  u16multiTurn = (u32result >> 12) & 0x0FFF; // Запись данных о количестве поворотов

  dAngle = 360 * double(u16singleTurn) / 4096;  // Преобразование данных об угле

  if (test_inf == 1)
  {
    Serial.print("Angle: ");
    Serial.print(dAngle);

    Serial.print("  Rotations:  " );
    Serial.println(u16multiTurn);
  }
  
  if ((dAngle > Save_previous_angle) && (u16multiTurn == u16Save_previousTurn)) FullAngle = FullAngle + dAngle - Save_previous_angle; // Обработка поворотов
  if ((dAngle < Save_previous_angle) && (u16multiTurn > u16Save_previousTurn)) FullAngle = FullAngle + dAngle + (360 - Save_previous_angle);
  if ((dAngle > Save_previous_angle) && (u16multiTurn > u16Save_previousTurn)) FullAngle = FullAngle - (360 - dAngle) - Save_previous_angle;
  if ((dAngle < Save_previous_angle) && (u16multiTurn == u16Save_previousTurn)) FullAngle = FullAngle + dAngle - Save_previous_angle;

  if (test_inf == 1)
  {
    Serial.println(dAngle);
    Serial.println(FullAngle);
    Serial.println(Save_previous_angle);
  }
  
  Save_previous_angle = dAngle;
  u16Save_previousTurn = u16multiTurn;

  if ((FullAngle / 254) > divider)
  {
    NEXTION_PORT.print("cle 2, 255\xFF\xFF\xFF");
    divider = divider * 2;
  }

  if (((FullAngle / 254) < divider) && (divider != 1))
  {
    NEXTION_PORT.print("cle 2, 255\xFF\xFF\xFF");
    divider = divider / 2;
  }
  
  if (test_inf == 1)
  {
    Serial.println(divider);
  }
  return (FullAngle / divider);
}

//========================================================================= Тензо

int Tenzo(int tnz_number)
{
  int tnz_data = 0;

  if (tnz_number == 1)
  {
    tnz_data = analogRead(tnz100_pin);
    if (test_inf == 1)
    {
      Serial.print("Tnz_100:   ");
      Serial.println(tnz_data);
    }
    return (tnz_data);
  }
  if (tnz_number == 2)
  {
    tnz_data = analogRead(tnz500_pin);
    if (test_inf == 1)
    {
      Serial.print("Tnz_500:   ");
      Serial.println(tnz_data);
    }
    return (tnz_data);
  }
  if (tnz_number == 3)
  {
    tnz_data = analogRead(tnz1000_pin);
    if (test_inf == 1)
    {
      Serial.print("Tnz_1000:   ");
      Serial.println(tnz_data);
    }
    return (tnz_data);
  }
}

//========================================================================= Таймер

void times()
{
  Ex_time++;
}

//========================================================================= Конец
