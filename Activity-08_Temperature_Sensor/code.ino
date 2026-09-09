// Activity 08 – Temperature Sensor

const int temperaturePin = A0;

float temperature;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(temperaturePin);

  // Convert the sensor value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Calculate temperature in degree Celsius
  temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
