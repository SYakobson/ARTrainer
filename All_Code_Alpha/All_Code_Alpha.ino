#include <MPU9250_asukiaaa.h> // Библиотека для гироскопа

#include <DueTimer.h> // Библиотека таймера для DUE
#include <SPI.h> 

#include <INextionTouchable.h> // Библиотеки для Nextion
#include <Nextion.h>
#include <NextionPage.h>
#include <NextionSlider.h>
#include <NextionButton.h>
//#include <NextionWaveform.h>

#define NEXTION_PORT Serial1 // Порт передачи Nextion
#define M1_STP_pin 2 // Пин для передачи шага двигателя
#define M1_DIR_pin 4 // Пин для направления двигателя

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
NextionPage pgEX1(nex, 9, 0, "Exercise 1"); //Успражнение 1

//==================================================== Кнопки

NextionButton MC1_Start(nex, 2, 7, "MC1_Start"); // Мотор 1, Старт
NextionButton MC1_Reverse(nex, 2, 8, "MC1_Reverse"); // Мотор 1, Реверс
NextionButton T100_Button_2(nex, 3, 6, " T100_Button_2"); //Старт показаний Тензо 100
NextionButton T500_Button_2(nex, 4, 6, " T500_Button_2"); //Старт показаний Тензо 500
NextionButton T1000_Button_2(nex, 5, 6, " T1000_Button_2"); //Старт показаний Тензо 1000
NextionButton SL_Button_2(nex, 6, 6, "SL_Button_2");  // Старт показаний сельсин датчика
NextionButton G_Button_2(nex, 7, 9, "G_Button_2"); // Старт показаний Гироскопа
NextionButton EX1_Start(nex, 9, 3, "EX1_Start"); //Старт 1 упражнения

//==================================================== Слайдеры

NextionSlider MC1_Slider(nex, 2, 4, "sExSlider"); // Мотор 1, слайдер оборотов
NextionSlider EX1_Slider(nex, 9, 2, "EX1_Slider"); // Упражнение 1, слайдер оборотов

//========================================================================= Используемые переменные

int page = 0; // Номер страницы 

int tnz100_pin = A0; // Пины тензо датчиков
int tnz500_pin = A1;
int tnz1000_pin = A2;

int tnz100_value = 0; // Данные тензо датчиков
int tnz500_value = 0;
int tnz1000_value = 0;

float AccelX = 0; // Данные гироскопа
float AccelY = 0;
float AccelZ = 0;

//=================================== Данные для двигателя

bool M1_STP_value = 0; // Шаг двигателя
bool M1_DIR_value = 0; // Направление
bool M1_State = 0; // Вкл/выкл

double M1_Freq = 0; // Частота оборотов двигателя
double M1_Period = 0; // Переиод оборота вала двигателя

//=================================== Данные для Сельсин датчика

uint8_t u8Count = 0, u8data = 0; 
uint16_t u16multiTurn = 0, u16singleTurn = 0, u16Save_previousTurn = 0;
uint32_t u32result = 0;
double dAngle = 0, dRotations = 0; // угол и кол-во поворотов сельсин датчика (повороты от 0 до 4095)
double FullAngle = 0,Save_previous_angle = 0;
int divider = 1;

//========================================================================= Отправка данных двигателя

void stp1_toggle()
{
  M1_STP_value = !M1_STP_value;
  digitalWrite(M1_STP_pin, M1_STP_value);
}

//==================================================================================================================================================
//========================================================================= SETUP
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

//==================================================== Инициализация портов
  
  SPI.begin(); // Запуск SPI
  Serial.begin(115200); // Скорость порта SPI 
  SPI.transfer(0);  //Очищение буфера SPI
  
//==================================================== Инициализация двигателей
  
  pinMode(M1_STP_pin, OUTPUT); 
  pinMode(M1_DIR_pin, OUTPUT);
  digitalWrite(M1_STP_pin, M1_STP_value);
  digitalWrite(M1_DIR_pin, M1_DIR_value);
  
//==================================================== Инициализация гироскопа

  Wire.begin(); //Запуск порта передачи для гироскопа
  mySensor.setWire(&Wire);
  mySensor.beginAccel(); // Задание функции получения Accel

//==================================================== Запуск таймеров

  Timer3.attachInterrupt(stp1_toggle);
  Timer3.setPeriod(M1_Period);

//==================================================== Инициализация функций Nextion

  NEXTION_PORT.begin(115200); // Скорость порта Nextion
  nex.init(); // Инициализация Nextion

  Serial.println(MC1_Slider.attachCallback(&callback_MC1_Slider)); //Инициализация прерываний
  Serial.println(MC1_Start.attachCallback(&callback_MC1_Start));  
  Serial.println(MC1_Reverse.attachCallback(&callback_MC1_Reverse));
  Serial.println(T100_Button_2.attachCallback(&callback_T100_Button_2));
  Serial.println(T500_Button_2.attachCallback(&callback_T500_Button_2));
  Serial.println(T1000_Button_2.attachCallback(&callback_T1000_Button_2));
  Serial.println(SL_Button_2.attachCallback(&callback_SL_Button_2));
  Serial.println(G_Button_2.attachCallback(&callback_G_Button_2));
  Serial.println(EX1_Slider.attachCallback(&callback_EX1_Slider));
  Serial.println(EX1_Start.attachCallback(&callback_EX1_Start));

//====================================================

  SPI.begin(4);
  SPI.setClockDivider(4, SPI_CLOCK_DIV128); //Установка Clock
  Serial.println("  *** Setup complete ***  "); // Конец всех установок
  
}

//========================================================================= Конец Setup
//================================================================================================================================================== 

//==================================================================================================================================================
//========================================================================= Loop

void loop()
{
  nex.poll();
//========================================================================= Считывание и построение графика Тензо 100
  
  if(page == 3) 
  {
    tnz100_value = 0;
    tnz100_value = analogRead(tnz100_pin);
    Serial.print("Tnz_100:   ");
    Serial.println(tnz100_value);  
    Data(0,2,tnz100_value*2);
    NEXTION_PORT.print("T100_val_1.val=");
    DataVal(tnz100_value);
  }

//========================================================================= Считывание и построение графика Тензо 500
  
  if(page == 4) 
  {
    tnz500_value = 0;
    tnz500_value = analogRead(tnz500_pin);
    Serial.print("Tnz_500:   ");
    Serial.println(tnz500_value);  
    Data(0,2,tnz500_value/2);
    NEXTION_PORT.print("T500_val_1.val=");
    DataVal(tnz500_value);
  }

//========================================================================= Считывание и построение графика Тензо 1000
  
  if(page == 5) 
  {
    tnz1000_value = 0;
    tnz1000_value = analogRead(tnz1000_pin);
    Serial.print("Tnz_1000:   ");
    Serial.println(tnz1000_value);  
    Data(0,2,tnz1000_value/4);
    NEXTION_PORT.print("T1000_val_1.val=");
    DataVal(tnz1000_value);
  }
  
//========================================================================= Считывание данных и построение графика для Сельсин датчика
  
  if ((page == 6)||(page == 9))
  {
   if ((dAngle == 0)&&(u16multiTurn == 0))
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
   
   Serial.print("Angle: "); 
   Serial.print(dAngle);

   Serial.print("  Rotations:  " );
   Serial.println(u16multiTurn);
   
   if ((dAngle > Save_previous_angle)&&(u16multiTurn == u16Save_previousTurn)) FullAngle = FullAngle + dAngle - Save_previous_angle; // Обработка поворотов
   if ((dAngle < Save_previous_angle)&&(u16multiTurn > u16Save_previousTurn)) FullAngle = FullAngle + dAngle + (360 - Save_previous_angle);
   if ((dAngle > Save_previous_angle)&&(u16multiTurn > u16Save_previousTurn)) FullAngle = FullAngle - (360- dAngle) - Save_previous_angle;
   if ((dAngle < Save_previous_angle)&&(u16multiTurn == u16Save_previousTurn)) FullAngle = FullAngle + dAngle - Save_previous_angle;       
   
   Serial.println(dAngle);
   Serial.println(FullAngle);
   Serial.println(Save_previous_angle);

   Save_previous_angle = dAngle;
   u16Save_previousTurn = u16multiTurn;
   
   if ((FullAngle / 254) > divider)
   {
    NEXTION_PORT.print("cle 2, 255\xFF\xFF\xFF");
    divider = divider * 2;
   }
   
   if (((FullAngle / 254) < divider)&&(divider != 1))
   {
    NEXTION_PORT.print("cle 2, 255\xFF\xFF\xFF");
    divider = divider / 2;
   }
   
   Serial.println(divider);
   
   if (page == 6) // Отправка данных на график Сельсина
   {
    Data(0,2,FullAngle/divider);
    NEXTION_PORT.print("SL_val_1.val=");
    DataVal(FullAngle);
   }
   if (page == 9) Data(0,7,FullAngle/divider); // Отправка данных на график Сельсина упражнение 1
  
  }

//========================================================================= Считывание и построение графиков гироскопа

  if (page == 7)
  {
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
        
    if (AccelX > 0)  AccelX = 128 + (AccelX*21); // Форматирование данных для вывода на график
    if (AccelX < 0)  AccelX = 128 - (-AccelX*21);
    if (AccelX == 0)  AccelX = 128;

    if (AccelY > 0)  AccelY = 128 + (AccelY*21);
    if (AccelY < 0)  AccelY = 128 - (-AccelY*21);
    if (AccelY == 0)  AccelY = 128;

    if (AccelZ > 0)  AccelZ = 128 + (AccelZ*21);
    if (AccelZ < 0)  AccelZ = 128 - (-AccelZ*21);
    if (AccelZ == 0)  AccelZ = 128;
    
    Data(0,2, AccelX);
    Data(1,2, AccelY);
    Data(2,2, AccelZ);
  }
  
}
//========================================================================= Конец Loop
//==================================================================================================================================================

//================================================================================================================================================== Функции
//========================================================================= Отклик на нажатие слайдера в меню двигателя 1

void callback_MC1_Slider(NextionEventType type, INextionTouchable *widget) 
{
  if (type == NEX_EVENT_POP)
  {
    M1_Freq = MC1_Slider.getValue();
    if (M1_Freq > 100)
    {
      M1_Period = (double)(1000000/M1_Freq);   
      Timer3.start(M1_Period);
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      M1_State = 1;
    }
    else 
    {
      Timer3.stop();
    }
  }
}

//========================================================================= Слайдер двигателя упражнение 1

void callback_EX1_Slider(NextionEventType type, INextionTouchable *widget) 
{
  if (type == NEX_EVENT_POP)
  {
    M1_Freq = EX1_Slider.getValue();
    
    if (M1_Freq >100)
    {
      M1_Period = (double)(1000000/M1_Freq);   
      Timer3.start(M1_Period);
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      M1_State = 1;
    }
    
    else 
    {
      Timer3.stop();
    }
    
    Serial.print("M1_Freq = ");
    Serial.println(M1_Freq);
  }
}

//========================================================================= Отклик на нажатие кнопки "Старт" в меню двигателя 1
 
void callback_MC1_Start(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH)
  {
    
    if (M1_State == 0)
    {
      Serial.println("Button Start pressed");
      MC1_Start.setBackgroundColour(NEX_COL_RED);
      M1_State = 1;
      Timer3.start(M1_Period);
    }
   
    else 
    {
      Serial.println("Button Start unpressed");
      MC1_Start.setBackgroundColour(NEX_COL_GREEN);
      M1_State = 0;
      Timer3.stop();
    }
  }
}

//========================================================================= Отклик на нажатие кнопки "Реверс" в меню двигателя 1

void callback_MC1_Reverse(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_PUSH) 
  {
    
    if (M1_DIR_value == 0) 
    {
      Serial.println("Button Reverse pressed");
      MC1_Reverse.setBackgroundColour(NEX_COL_RED);
      M1_DIR_value = 1;
      digitalWrite(M1_DIR_pin, 1);
    }
    
    else 
    {
      Serial.println("Button Reverse unpressed");
      MC1_Reverse.setBackgroundColour(NEX_COL_BLUE);
      M1_DIR_value = 0;
      digitalWrite(M1_DIR_pin, 0);
    }
  }
}

//========================================================================= Кнопка Старта Тензо 100

void callback_T100_Button_2(NextionEventType type, INextionTouchable *widget)
{
  if ((type == NEX_EVENT_PUSH)&(page == 3))
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
   if ((type == NEX_EVENT_PUSH)&(page == 4))
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
   if ((type == NEX_EVENT_PUSH)&(page == 5))
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
  if ((type == NEX_EVENT_PUSH)&(page == 6))
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
   if ((type == NEX_EVENT_PUSH)&(page == 7))
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

//========================================================================= Кнопка старт упражнения 1

void callback_EX1_Start(NextionEventType type, INextionTouchable *widget) 
{
  if ((type == NEX_EVENT_PUSH)&(page == 9))
  {
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" unpressed");
    page = 0;
    SL_Button_2.setBackgroundColour(NEX_COL_GREEN);
  }
  
  else
  {
    page = 9;
    Serial.print("Button Start on page ");
    Serial.print(page);
    Serial.println(" pressed");
    SL_Button_2.setBackgroundColour(NEX_COL_RED);
  }
  
  if (type == NEX_EVENT_PUSH)
  {
    Serial.println("Button Start pressed");
    digitalWrite(LED_BUILTIN, HIGH);
    
    if (M1_State == 0)
    {
      EX1_Start.setBackgroundColour(NEX_COL_RED);
      M1_State = 1;
      Timer3.start(M1_Period);
    }
    
    else 
    {
      EX1_Start.setBackgroundColour(NEX_COL_GREEN);
      M1_State = 0;
      Timer3.stop();
    }
  }
  
  else if (type == NEX_EVENT_POP)
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
} 

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
//========================================================================= Конец
