// Activity 04 – Ultrasonic Sensor

const int trigPin = 8;
const int echoPin = 7;

long duration;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop()
{
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send an ultrasonic pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the echo duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimetres
  distance = duration * 0.034 / 2;

  // Display the distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
