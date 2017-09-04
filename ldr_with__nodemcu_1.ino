int sensePin=A0;
int ledPin=5;
int ledPin2=4;
void setup() 
{
  Serial.begin(9600);
  pinMode(sensePin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}
void loop() 
{
  int val = analogRead(sensePin);   // read the input on analog pin 0:
  Serial.println(val);
  
  if(val<15)
  {
    digitalWrite(ledPin,HIGH);
    digitalWrite(ledPin2,LOW); 
  }
  else
  {
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin,LOW);
  }

}
