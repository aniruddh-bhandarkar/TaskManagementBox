#include <millisDelay.h>

// Define the pin for the LED

const int ledPin = 13;

// Define the interval for blinking in milliseconds

const unsigned long blinkInterval = 1000; // 1 second

// Create a millisDelay object for managing delays

millisDelay blinkDelay;

void setup() {

// Initialize the LED pin as an output

pinMode(ledPin, OUTPUT);

// Start the blinkDelay timer with the blinkInterval duration

blinkDelay.start(blinkInterval);

}

void loop() {

// Check if it's time to toggle the LED

//Code to check for legal time inputs

//If the time is legal, pass the code; else repeatdly ask the user

//Print the timer has started

int timer[4]; //Creating a timer

while(timer[2]>6){

serial.println("Enter in a valid timer");

}

serial.println("The timer has begun"+timer);

if (blinkDelay.justFinished()) {

// Toggle the LED state

digitalWrite(ledPin, !digitalRead(ledPin));

int time = 0;

String message = "The time is " + String(time);

Serial.println(message);

// Restart the blinkDelay timer

blinkDelay.repeat();

}