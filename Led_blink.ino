
int led=D4;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(4, OUTPUT);
  pinMode(led,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(led,LOW);// turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);
  digitalWrite(led,HIGH);// turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
