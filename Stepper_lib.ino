#include <Stepper.h>

// Define number of steps per revolution:
const int stepsPerRevolution = 200;

// Initialize the stepper library on pins 8 through 11:
Stepper stepper = Stepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // Set the motor speed (RPMs):
  stepper.setSpeed(100);
}

void loop() {
  // Step one revolution in one direction:
  stepper.step(200);
  // Time delay:
  delay(2000);

  // Step on revolution in the other direction:
  stepper.step(-200);
  // Time delay:
  delay(2000);
}
