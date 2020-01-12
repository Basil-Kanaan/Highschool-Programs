#include <Servo.h>

Servo leftS;
Servo rightS;
int sensorpin = 1;                 // analog pin used to connect the sharp sensor.
int obj;                           // variable to store the values from sensor(initially zero).  
int firepin = 2;
int fire;
int pos = 0;
int Phase = 1;

void setup() {
Serial.begin(9600);                //Starts serial monitor.
leftS.attach(2);                   //Sets the left servo as pin 2
rightS.attach(3);                  //Sets the right servo as pin 3.
}

void loop() 
{
 switch(Phase)
 {
  case 1:
  FlameCheck();
  FORWARD();                       //Refers to "FORWARD" function. Makes the robot continue forward.
  obj = analogRead(sensorpin);     //variable 'obj' is set to the value returned from the IR sensor. 0 being 80 cm (Max Value). 
  Serial.println(obj);             //Prints 'obj' value to the serial monitor.
 if(obj >= 548)                    //If returned value from IR sensor is more than 544 (10 cm), then the code below is run. 
  {
    Serial.print("Detected Object");
    StopRobot();                   //Refers to "StopRobot" function. Stops the robot.
    RIGHT();                          //Refers to "LEFT" function. Makes the robot pivot counter-clockwise [Left].
    StopRobot();
    obj = analogRead(sensorpin);   
    if(obj>= 408)
    { 
   Serial.print("Detected Object twice");
     LEFT();                   //Refers to "RIGHT" function. Makes the robot pivot clockwise [Right].
       StopRobot();  
    }
  }
  break;
case 2:       
  Serial.print("Phase 2: ");           
  FORWARD(); 
  obj = analogRead(sensorpin);     //variable 'obj' is set to the value returned from the IR sensor. 0 being 80 cm (Max Value). 
  Serial.println(obj);             //Prints 'obj' value to the serial monitor.
  if(obj >= 500)                    //If returned value from IR sensor is more than 544 (10 cm), then the code below is run. 
  {
     
    obj = analogRead(sensorpin);  
   FORWARD2();
   LEFT2();
   Phase = 1; 
    
 
  }
    break;
  }

 }


void BLOW()
{
leftS.write(90);
rightS.write(90);  
digitalWrite(5,HIGH);
delay(3000);
digitalWrite(5,LOW);
delay(5000);
Phase = 2;
Serial.print("Phase 2");
digitalWrite(5,LOW);
delay(1000);
digitalWrite(5,LOW);
LEFT2();   
}
void FlameCheck()
{
  fire = analogRead(firepin);   
  Serial.print(fire);
  Serial.print("\n^fire\n");
  if(fire>= 600)
  {BLOW();}
}
void FORWARD()
{
  leftS.write(0);                 //Turns servo counter-clockwise
  rightS.write(180);              //Turns servo clockwise
}
    
  void FORWARD2()
{
  leftS.write(0);                 //Turns servo counter-clockwise
  rightS.write(180);              //Turns servo clockwise
  delay(500);
}
void LEFT2()
{
  
for( pos = 90; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
  
    leftS.write(pos);              // tell servo to go to position in variable 'pos' 
    rightS.write(pos);
    delay(10.99);                       // waits 15ms for the servo to reach the position 
  }
}

void LEFT()
{
  
for( pos = 90; pos < 179; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
  
    leftS.write(pos);              // tell servo to go to position in variable 'pos' 
    rightS.write(pos);
    delay(18);                       // waits 15ms for the servo to reach the position 
  }
}

void RIGHT()
{
   for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    leftS.write(pos);              // tell servo to go to position in variable 'pos' 
    rightS.write(pos);
    delay(10.99);                       // waits 15ms for the servo to reach the position 
  }
}
void StopRobot()
{
leftS.detach();                   //Detaches left servo (removes from it's ping)
rightS.detach();
delay(1000);
leftS.attach(2);
rightS.attach(3);
}


