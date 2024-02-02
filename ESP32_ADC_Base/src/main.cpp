#include <Arduino.h>

// put function declarations here:
/*
Pins with ADC(ADC1 or ADC2)
ADC1 -> 36, 39, 34, 35, 32, 33
ADC2 -> 25, 26, 27, 14, 12, 13, 4, 2, 15

*/
uint32_t tim=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(tim + 1000<millis()){
    Serial.println(analogRead(34));
    tim = millis();
  }
}
