/*
 Name:		Sketch2.ino
 Created:	7/27/2020 9:55:12 AM
 Author:	janie
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay();
  digitalWrite(LED_BUILTIN, LOW);
}
