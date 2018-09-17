   #include <MPU9250_asukiaaa.h>

MPU9250 mySensor;

void setup() 
{

  Serial.begin(115200);
  Serial.println("started");

  Wire.begin();

  mySensor.setWire(&Wire);
  mySensor.beginAccel();
  mySensor.beginMag();
  
}

void loop() {
    mySensor.accelUpdate();
    Serial.println("print accel values");
    Serial.println("accelX: " + String(mySensor.accelX()));
    Serial.println("accelY: " + String(mySensor.accelY()));
    Serial.println("accelZ: " + String(mySensor.accelZ()));
    Serial.println("accelSqrt: " + String(mySensor.accelSqrt()));
    
    mySensor.magUpdate();
    Serial.println("print mag values");
    Serial.print("magX: " + String(mySensor.magX()));
    Serial.print("   maxY: " + String(mySensor.magY()));
    Serial.println("   magZ: " + String(mySensor.magZ()));
    Serial.println("horizontal direction: " + String(mySensor.magHorizDirection()));

    Serial.println("at " + String(millis()) + "ms");
    delay(100);
}
