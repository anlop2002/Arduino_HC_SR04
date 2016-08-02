/*
 * Garage door sensor project
 * Andres Lopez de Vergara
 */
 
const int greenLedPin = 13;
const int redLedPin = 12;

void setup() {
  Serial.begin(9600);

  pinMode(greenLedPin,OUTPUT);
  pinMode(redLedPin, OUTPUT);

}

void loop() {
  
}
