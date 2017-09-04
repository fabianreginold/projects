#define TRIGGER 5 // defining trigger pin
#define ECHO 4 // defining echo pin
void setup()
{
Serial.begin(9600);
pinMode(TRIGGER, OUTPUT); //initializing trigger as output
pinMode(ECHO, INPUT);
pinMode(D4,OUTPUT);//initialing trigger as input
}
void loop()
{
int duration, dist;
digitalWrite(TRIGGER, LOW); // make trigger low
delayMicroseconds(2);
digitalWrite(TRIGGER, HIGH); // make trigger high
delayMicroseconds(10); //give 10 microsec delay
digitalWrite(TRIGGER, LOW);
duration = pulseIn(ECHO, HIGH);
dist = (duration / 2) / 29.1; // calibrate the distance using pulse
Serial.print(dist); // Print the distance value
if(dist<10)
{
  digitalWrite(D4,HIGH);
  
}
else
{
  digitalWrite(D4,LOW);
}
Serial.println(" cm");
delay(500);
}
