// Activity 05 – Buzzer

const int buzzerPin = 8;

void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Turn the buzzer ON
  digitalWrite(buzzerPin, HIGH);
  delay(1000);

  // Turn the buzzer OFF
  digitalWrite(buzzerPin, LOW);
  delay(1000);
}
