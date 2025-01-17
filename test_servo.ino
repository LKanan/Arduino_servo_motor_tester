#include <Servo.h>

Servo moteur;

void setup()
{
  moteur.attach(12, 650, 2662);
  moteur.write(0);
  Serial.begin(9600);
}

void loop()
{
// For one angle 
// moteur.write(value_angle)

// For 0 to 180 
  for (int a = 0; a <= 180; a++)
  {
    moteur.write(a);
    // You can modify the value of delay if you want
    delay(5);
  }
  delay(500);

// For 180 to 0
  for (int a = 180; a >= 0; a--)
  {
    moteur.write(a);
    delay(5);
  }
  delay(500);
}
