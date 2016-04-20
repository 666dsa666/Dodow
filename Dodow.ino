/*
Breathing sleep LED, like a DODOW.

LED is attached with a resistor
*/
int i = 0;
int ledPin = 9;               // the PWM pin the LED is attached to
void setup() {                // wake up the led
  for(i = 0 ; i <= 15; i+=1)
  {
    analogWrite(ledpin, i);
    delay(5);
  }
}

void loop()
{
  for(i = 15 ; i <= 255; i+=1)
  { 
    analogWrite(ledpin, i);
    delay(17);                //4080 ms ~4s
  }
  for(i = 255; i >=15; i-=1)
  {
    analogWrite(11, i);
    delay(25);                //6000ms ~6s
  }
}
