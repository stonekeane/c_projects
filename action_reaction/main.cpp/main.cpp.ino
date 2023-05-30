#define LED_PIN 7
#define BUTTON_PIN 10

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() 
{
  if (digitalRead(BUTTON_PIN) == 1)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}
