#include <HIH4000.h>

int readPin=A3;
HIH4000 hih(readPin); //the analog pin where the sensor is connected
float tempC=44.23;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 float rh= hih.getHumidity(); //humidity with compensation for 25C(typical use)
 Serial.println(rh);
 float truerh=hih.getTrueHumidity(tempC); //function for temperatue compensated Humidity, tempC can be read from sensor
 Serial.println(truerh);                  //make sure to read temepratue first, dann call .getTrueHumidity
 delay(600);
}
