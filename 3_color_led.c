/*
    Project name : 3-color LED module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-3-color-led-module
*/

// Define the pins for the LED module
const int redPin = 2;    // Red LED pin
const int greenPin = 3;  // Green LED pin
const int bluePin = 4;   // Blue LED pin

void setup() 
{
  // Set the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() 
{
  // Turn on the red LED, and off the green and blue LEDs (Red color)
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);  // Wait for 1 second
  
  // Turn off the red LED, on the green LED, and off the blue LED (Green color)
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);  // Wait for 1 second
  
  // Turn off the red LED, off the green LED, and on the blue LED (Blue color)
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);  // Wait for 1 second
}
