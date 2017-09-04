int ledPin[] = {16,5,4,0};

void setup()
{
  for (int i =0;i<4;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() 
{
  byte nums[] = {1, 2, 4, 8, 4, 2, 1, 2, 4, 8, 4, 2, 1};
  for (byte i = 0; i<13;i++)
  {
    displayBinary(nums[i]);
    delay(250);
  } 
}

void displayBinary(byte numToShow)
{
  for (int i =0;i<4;i++)
  {
    if (bitRead(numToShow, i)==1)
    {
      digitalWrite(ledPin[i], HIGH); 
    }
    else
    {
      digitalWrite(ledPin[i], LOW); 
    }
  }
}
