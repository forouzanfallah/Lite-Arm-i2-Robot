// Controlling a servo position using a potentiometer (variable resistor) 
// Lite Arm Testing Code
// AmirKabir University of Technology-Tehran Polytechnic
// Introduction to Robotics Course Final Project December 2018
// Github: Forouzanfallah1
// Personal Website: Forouzanfallah.ir
// don't hesitate to contact me for any further questions

#include <Servo.h> 
 
Servo myservo0;  // create servo object to control a servo 
Servo myservo1;
Servo myservo2;
Servo myservo3;


int potpin0 = 0;  // analog pin used to connect the potentiometer
int potpin1 = 1;
int potpin2 = 2;
int potpin3 = 3;


int val0;    // variable to read the value from the analog pin 
int val1;
int val2;
int val3;


 
void setup() 
{ 
 
  myservo0.attach(9);  // attaches the servo on pin 0 to the servo object 
  myservo1.attach(10);  
  myservo2.attach(11);
  myservo3.attach(6);  

}
void loop() 
{ 
   val0 = analogRead(potpin0);            // reads the value of the potentiometer (value between 0 and 1023) 
  val0 = map(val0, 500, 900, 90, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo0.write(val0);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 

  val1 = analogRead(potpin1); 
  val1 = map(val1, 400, 1300, 0, 179);
  myservo1.write(val1);
  delay(15); 

 val2 = analogRead(potpin2); 
  val2 = map(val2, 0, 1379, 0, 179);
  myservo2.write(val2);
  delay(15); 

  val3 = analogRead(potpin3); 
  val3 = map(val3, 0, 1379, 0, 179);
  myservo3.write(val3);
  delay(15); 
  

  
} 
