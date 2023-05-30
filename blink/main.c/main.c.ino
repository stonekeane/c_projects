void setup() 
{
  pinMode(7, OUTPUT);     // initialize digital pin 7 as an output
}

void loop() 
{
  digitalWrite(7, HIGH);  //turn the LED on by making the voltage HIGH
  delay(40);              //wait for a half second
  digitalWrite(7, LOW);   //turn the LED off by making the voltage LOW
  delay(40);              //wait for a half second 
}
