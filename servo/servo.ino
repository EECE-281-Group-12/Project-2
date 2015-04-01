#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(5);  // attaches the servo on pin 9 to the servo object 
} 

void loop() 
{ 
    pos = 90;                       
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1500);                     // waits 15ms for the servo to reach the position 
    
    pos = 0;
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1500);                     // waits 15ms for the servo to reach the position 
}
