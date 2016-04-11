/*
   6 respirations par minutes
   4 scondes d'apiration
   6 secondes d'expiration
*/

int ledPin = 9;           // the PWM pin the LED is attached to

void setup() {
}

// the loop routine runs over and over again forever:
void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += (255/4000)) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    delay(1);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= (255/6000)) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    delay(1);
  }
}
