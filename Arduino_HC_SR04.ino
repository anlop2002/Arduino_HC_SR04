/*
 * Balneario Camboriu garage door sensor project
 * Andres Lopez de Vergara
 */
#include "Ultrasonic.h"

const int greenLedPin = 13;
const int redLedPin = 12;
long distance = 0;
Ultrasonic ultrasonic(6,7);

void setup() {
  Serial.begin(9600);

  pinMode(greenLedPin,OUTPUT);
  pinMode(redLedPin, OUTPUT);

}

void loop() {
  distance = ultrasonic.Ranging(1);
  
  Serial.print(distance);
  digitalWrite(greenLedPin,LOW);
  digitalWrite(redLedPin,LOW);
  
  if (distance > 60) {
    digitalWrite(greenLedPin,HIGH);
  }else{
    digitalWrite(redLedPin,HIGH);
  }
  
  delay(1000);   
}
