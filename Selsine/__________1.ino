#include <SPI.h>

//const int slaveAPin = 23;
SPISettings settingsA(125000, MSBFIRST, SPI_MODE1);
  
void setup()
{
  SPI.begin(SCK); // инициализация интерфейса SPI
//  pinMode (MISO, OUTPUT);
//  SPI.transfer(0); // очищаем содержимое регистра
  Serial.begin(9600);
  SPI.setClockDivider(SCK,125); 
}

uint8_t u8Count, u8data;
uint32_t u32result = 0, u32ghost = 0; 


void loop()
{
  for (u8Count = 0; u8Count < 4; u8Count++)
  {
    SPI.beginTransaction(settingsA);
    digitalWrite (MISO, HIGH);
    SPI.transfer(0xFF); //shiftOut(slaveAPin,SCK,MSBFIRST,0xFF);
    digitalWrite(MISO, LOW); 
    u32result <= 8;
    u8data = SPI.transfer(0); //shiftIn(slaveAPin,SCK,MSBFIRST);
    u32result |= u8data;
  }  
  SPI.endTransaction();
  u32result >>=7;
  if (u32result != u32ghost) Serial.println(u32result);
  u32ghost = u32result;
}
