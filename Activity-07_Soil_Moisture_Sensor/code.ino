// Activity 07 – Soil Moisture Sensor

const int sensorPin = A0;
int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);

  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue < 400)
  {
    Serial.println("Soil is Wet");
  }
  else if (sensorValue < 700)
  {
    Serial.println("Soil Moisture is Moderate");
  }
  else
  {
    Serial.println("Soil is Dry");
  }

  delay(1000);
}
