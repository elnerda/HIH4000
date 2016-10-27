#include <HIH4000.h>

int readPin=A3;
HIH4000 hih(readPin,25.0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 float rh= hih.getHumidity();
 Serial.println(rh);
 delay(600);
}
