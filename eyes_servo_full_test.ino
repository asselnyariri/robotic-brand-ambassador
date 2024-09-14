//==================
//This is a quick servo position test I did for my Eye Project
//The servos move from the set postions for the X and Y axis
//Test one sets the LED HIGH 20 seconds, long blink.
//Test two sets the servos at position 40,0 for 6.5 seconds, two blinks.
//Test three sets the servos at position 80,0 for 7.5 seconds, three blinks.
//Test four sets the servos at position 0,70 for 8.5 seconds, four blinks.
//Test five sets the servos at position 0,110 for 9.5 seconds, five blinks.

//NEED TO PRESS RESET ONCE TEST IS COMPLETE

#include <Servo.h> //servo library

Servo horServo; //x-axis servo
Servo vertServo; //y-asxis servo
int led = 13;

void setup(){
  horServo.attach(8); //x-axis servo pin 8
  vertServo.attach(9); //y-axis servo pin 9
  pinMode(led, OUTPUT);
}

void loop(){
  //==================TEST ONE=============//
  
  //Servos in resting or center position.  
  horServo.write(80);
  vertServo.write(40); 
  
  //blink once
  digitalWrite(led, HIGH);
  delay(20000);
  digitalWrite(led, LOW);
  
  //============Test Two=================//
  
  //test two blinks twice
  
  horServo.write(20); //x left limit
  vertServo.write(40);
  
  //blink twice
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(5000);
  
  //=================Test Three==================//
  
  //test three blinks three times
  
  horServo.write(80); //x right limit
  vertServo.write(40);
  
  //blink three times
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(5000);
  
  
  //==================Test four==================//
  
  //Test four blinks four times
  
  horServo.write(80);
  vertServo.write(0); //y top limit
  
  //blink four times
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(5000);
  
  //=================Test Five===================//
  
  //Test Five blinks five times
  
  horServo.write(80);
  vertServo.write(110); //y bottom limit
  
  //blinks five times
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(5000);
  
  //=====================END======================//
  
  //Servos back to resting or center. Testing ended hit RESET or wait FOREVER
  
  horServo.write(80);
  vertServo.write(40);   
  digitalWrite(led, HIGH);
  while(1){}
  
  
}
