#include <SPI.h>

SPISettings settingsA(100000, MSBFIRST, SPI_MODE1); //задание параметров передачи SPI
  
void setup()
{
  SPI.begin(); // инициализация интерфейса SPI  
  SPI.transfer(0); // очищаем содержимое регистра
  Serial.begin(9600); // задание скорости порта
}

uint8_t u8Count, u8data;
uint16_t u16multiTurn, u16singleTurn;
uint32_t u32result = 0;
double dAngle, dRotations;

void loop()
{
  SPI.beginTransaction(settingsA); // начало передачи
  
  for (u8Count = 0; u8Count < 4; u8Count++) // считывание 4 байт по 8 бит 4 раза
  {
    u32result <<= 8; // сдвиг на 8 бит для записи нового байта
    u8data = SPI.transfer(0); // приём байта
    u32result |= u8data; // запись байта в общую передачу
  }  
  
  SPI.endTransaction(); // конец передачи
  
  u32result >>=7; // сдвиг на 7 бит для чтения данных
  
  u16singleTurn = u32result & 0x0FFF; // запись данных об угле
  u16multiTurn = (u32result >> 12) & 0x0FFF; // запись данных о количестве поворотов
  
  dAngle = 360 * double(u16singleTurn) / 4096;  // преобразование данных об угле
  
  Serial.print("Angle: "); 
  Serial.print(dAngle);

  Serial.print("  Rotations:  " );
  Serial.println(u16multiTurn);
 // delay(150); 
}
