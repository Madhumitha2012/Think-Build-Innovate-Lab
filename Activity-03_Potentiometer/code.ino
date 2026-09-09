

const int potentiometerPin = A0;
const int ledPin = 9;

int sensorValue = 0;
int brightness = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the potentiometer value
  sensorValue = analogRead(potentiometerPin);

  // Convert the value from 0–1023 to 0–255
  brightness = map(sensorValue, 0, 1023, 0, 255);

  // Control LED brightness
  analogWrite(ledPin, brightness);

  // Display the value in Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(sensorValue);

  delay(100);
}
