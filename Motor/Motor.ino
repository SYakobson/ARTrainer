#include <DueTimer.h> // Библиотека таймера для DUE

#define STP_pin 2 // Пин для передачи шага двигателя
#define DIR_pin 4 // Пин для направления двигателя

//=================================== Данные для двигателя
  
bool STP_value = 0; // Шаг двигателя
bool DIR_value = 0; // Направление

double Freq_current = 10000; // Частота оборотов двигателя текущая //25000
double Freq_end = 100000; // Частота боротов двигателя конечная //100000
double Period = 0; // Переиод оборота вала двигателя

//========================================================================= 

void setup() 
{
  pinMode(STP_pin, OUTPUT); 
  pinMode(DIR_pin, OUTPUT);
  Timer3.attachInterrupt(stp1_toggle);
  Period = (double)(1000000/Freq_current); 
  Timer3.start(Period);
}

void loop() 
{  
  if (Freq_current < Freq_end)
  {
    Timer2.attachInterrupt(timer_interrupt_up).start(500);
   }
   
   delay(10000);
   Freq_current = Freq_end;
   Freq_end = 10000;
   
   if (Freq_current > Freq_end)
   {
    Timer2.attachInterrupt(timer_interrupt_down).start(500);
   }
   delay(10000);
   Freq_current = Freq_end;
   Freq_end = 100000;
}

//========================================================================= Функции

void timer_interrupt_up() // Прерывание на повышение оборотов
{
  if (Freq_current < Freq_end) Freq_current+= 10;
  Period = (double)(1000000/Freq_current);
  Timer3.start(Period);
}

void timer_interrupt_down() // Прерывание на понижение оборотов
{
  if (Freq_current > Freq_end) Freq_current-= 10;
  Period = (double)(1000000/Freq_current);
  Timer3.start(Period);
}

void stp1_toggle() // Отправка данных двигателя
{
  STP_value = !STP_value;
  digitalWrite(STP_pin, STP_value);
}
