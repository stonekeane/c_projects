void setup() 
{
  pinMode(7, OUTPUT);
  pinMode(10, INPUT);
}

void loop() 
{
  if (digitalRead(10) == 1)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }
}
