# Activity 05 – Ultrasonic Sensor

## Objective

To measure the distance between an object and an HC-SR04 ultrasonic sensor using an Arduino UNO.

## Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Jumper Wires

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Arduino Program

The Arduino program for this activity is stored in the `code.ino` file.

## Output

The ultrasonic sensor measures the distance between the sensor and an object. The measured distance is displayed in the Serial Monitor.

![Output](output.png)

## Learning Outcome

- Understood the working principle of an ultrasonic sensor.
- Learned how to use the TRIG and ECHO pins.
- Learned how to measure the time taken by an ultrasonic signal.
- Learned how to calculate distance using Arduino.
- Learned how to display sensor readings in the Serial Monitor.

## Challenges Faced

- Incorrect connections between the Arduino and sensor can prevent proper distance measurement. This was resolved by checking the VCC, GND, TRIG, and ECHO connections.
- Incorrect pin numbers in the Arduino program can cause errors. This was resolved by ensuring that the pin numbers in the code match the circuit connections.
- Incorrect object placement may affect the sensor readings. This was resolved by placing an object in front of the sensor.

## Real-World Applications

- Obstacle detection systems
- Automatic parking systems
- Robot navigation
- Water level monitoring systems

## Connection to Your PoC

The ultrasonic sensor can be used in a smart monitoring system to measure the distance or level of an object. For example, it can be used to monitor the water level in a tank and provide an alert when the water reaches a particular level.
