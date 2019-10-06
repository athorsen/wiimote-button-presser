#include <Servo.h>

const int _buttonPin = 11;
const int _servoPin = 10;

Servo _wiimoteServo;

void setup() {
  pinMode(_buttonPin, INPUT);

  _wiimoteServo.attach(_servoPin);
}

void loop() {
  int buttonState = digitalRead(_buttonPin);

  if (buttonState == HIGH) {
    // button is pressed - move servo to press Wii button
    _wiimoteServo.write(20);
  } else {
    // button is released - move servo to not press Wii button
    _wiimoteServo.write(30);
  }

  delay(50);
}
