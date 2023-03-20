//connect one potentiometer and 2servos.servo1 to have(0,180),servo2(180,0)
  //connect 2leds on the second servo(1red,1green)so that between 0-512 green 
  //to turn on and between 0-513-1023 red turns on
#include <Servo.h> //headerfile for servo
//Servo myservo;//declare Servo object
int potpin=A0;
int val;

void setup(){myservo.attach(9);
            }
void loop(){val=analogRead(potpin);
            val=map(val,0,1023,0,180);
            myservo.write(val);
            delay(15);
           }
  
  
