//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
//#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__HARDSERIAL


// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 1133 bytes
  { 255,17,0,84,0,102,4,19,0,0,0,0,16,3,126,200,106,200,200,84,
  3,1,1,0,25,0,131,24,2,35,9,20,2,29,9,46,1,30,5,2,
  7,15,31,69,110,103,108,105,115,104,0,37,131,62,2,34,9,52,2,29,
  9,79,1,30,5,2,79,2,31,65,114,97,98,105,99,0,25,130,57,105,
  66,25,48,105,56,25,140,8,44,23,11,17,3,75,117,32,12,63,118,27,
  10,147,19,31,11,131,2,26,7,77,111,29,6,65,111,24,6,153,13,18,
  5,100,64,2,26,2,11,130,1,12,124,91,1,11,104,92,16,7,122,57,
  11,17,68,44,71,77,26,37,71,65,24,54,42,73,17,19,8,36,135,94,
  67,24,72,16,9,19,72,16,10,41,42,12,7,68,2,26,11,67,24,85,
  16,9,19,84,16,10,41,52,12,7,68,2,26,11,66,66,15,26,12,55,
  15,22,12,54,9,36,7,193,6,26,66,66,29,54,12,56,29,45,12,54,
  17,73,7,129,133,26,66,66,43,54,12,56,43,45,12,54,25,73,7,129,
  177,26,66,66,57,54,12,56,57,45,12,54,33,73,7,129,2,26,66,92,
  15,28,12,77,15,24,12,90,9,37,7,129,1,26,67,44,15,20,12,34,
  15,20,12,41,9,12,7,68,2,26,11,67,44,29,20,12,34,29,20,12,
  41,17,12,7,68,2,26,11,67,44,43,20,12,34,43,20,12,41,25,12,
  7,68,2,26,11,67,44,57,20,12,34,57,20,12,41,33,12,7,68,2,
  26,11,130,2,105,53,93,1,105,45,93,16,66,122,17,11,17,2,6,108,
  36,20,5,108,30,20,19,67,32,11,1,2,26,31,31,79,78,0,79,70,
  70,0,2,7,139,36,20,6,139,30,20,65,67,34,11,1,176,26,31,31,
  79,78,0,79,70,70,0,2,7,169,36,20,6,169,30,20,102,67,33,11,
  1,148,26,31,31,79,78,0,79,70,70,0,70,43,110,10,16,36,110,8,
  16,52,68,8,9,17,26,37,0,130,57,131,65,67,48,132,56,67,140,33,
  45,50,11,17,5,68,140,53,53,57,144,47,47,147,41,36,36,55,2,26,
  31,13,0,129,81,106,23,4,67,106,22,4,154,9,17,3,64,24,100,101,
  102,117,108,116,32,109,111,111,100,0,129,107,112,8,6,89,112,9,6,172,
  14,6,4,64,8,107,109,0,129,16,16,21,8,12,16,21,8,24,10,13,
  5,64,8,84,101,109,112,0,129,6,31,34,8,1,31,32,8,19,18,20,
  5,64,8,72,117,109,105,100,105,116,121,0,129,22,45,18,8,11,45,16,
  8,26,27,10,5,64,8,82,97,105,110,0,129,2,59,39,8,2,59,32,
  7,18,34,23,5,64,8,83,117,110,112,111,119,101,114,0,129,7,73,16,
  8,3,73,16,8,30,43,10,5,64,8,109,118,115,0,129,7,85,16,8,
  3,86,16,8,30,54,10,5,64,8,109,97,120,0,129,67,98,26,5,49,
  96,32,6,81,60,16,3,64,8,87,105,110,100,32,115,112,101,101,100,0,
  129,17,129,14,6,13,129,14,6,32,79,7,3,64,8,76,105,103,104,116,
  0,129,9,160,34,6,5,160,33,6,71,79,17,3,64,176,87,97,116,101,
  114,32,112,117,109,112,0,129,9,190,34,6,5,190,34,6,109,79,17,3,
  64,148,83,101,101,100,115,32,109,111,116,111,114,0,129,70,110,5,10,58,
  110,6,10,149,13,4,6,64,8,99,0,12,0,129,12,18,24,10,8,18,
  24,10,27,10,12,5,64,24,216,167,217,132,216,173,216,177,216,167,216,177,
  216,169,0,129,12,32,25,10,6,32,26,10,26,18,13,5,64,24,216,167,
  217,132,216,177,216,183,217,136,216,168,216,169,0,129,18,46,18,10,13,46,
  19,10,27,26,10,5,64,24,216,167,217,132,217,133,216,183,216,177,0,129,
  14,58,25,10,8,58,24,9,26,34,13,5,64,24,216,167,217,132,216,179,
  216,183,217,136,216,185,0,129,73,98,22,5,51,96,26,6,81,60,13,3,
  64,24,216,179,216,177,216,185,216,169,32,216,167,217,132,217,135,217,136,216,
  167,216,161,0,129,13,190,24,6,6,190,25,6,110,79,17,4,64,148,217,
  133,216,173,216,177,217,131,32,216,167,217,132,216,168,216,176,217,136,216,177,
  0,129,14,160,23,6,9,160,24,6,74,79,16,4,64,176,217,133,216,182,
  216,174,216,169,32,216,167,217,132,217,133,216,167,216,161,0,129,18,129,10,
  6,14,129,11,6,30,79,7,4,64,24,217,129,217,132,216,167,216,180,0,
  129,81,106,19,4,67,106,20,4,156,9,15,3,64,8,216,167,217,132,217,
  136,216,182,216,185,32,216,167,217,132,216,170,217,132,217,130,216,167,216,166,
  217,138,0,129,108,111,4,6,91,111,5,6,172,13,3,4,64,8,217,131,
  217,133,0,129,8,73,13,7,4,74,13,7,31,43,8,4,64,8,217,133,
  92,47,216,171,0,129,7,86,15,7,4,87,15,7,30,54,9,4,64,24,
  216,167,217,132,216,167,216,185,217,132,217,137,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t select_defult; // from 0 to 3
  char edit_km[11]; // string UTF8 end zero
  uint8_t switch_light; // =1 if switch ON and =0 if OFF
  uint8_t switch_pump; // =1 if switch ON and =0 if OFF
  uint8_t switch_seeds; // =1 if switch ON and =0 if OFF
  int8_t joystick_1_x; // from -100 to 100
  int8_t joystick_1_y; // from -100 to 100

    // output variables
  float onlineGraph_wind_var1;
  float onlineGraph_wind_var2;
  float onlineGraph_wind_var3;
  char text_wind[11]; // string UTF8 end zero
  char text_max_wind[11]; // string UTF8 end zero
  int8_t level_temp_down; // from 0 to 100
  int8_t level_hum; // from 0 to 100
  int8_t linear_rain; // from 0 to 100
  int8_t linear_sunpower; // from 0 to 100
  int8_t level_temp_up; // from 0 to 100
  char text_temp[11]; // string UTF8 end zero
  char text_hum[11]; // string UTF8 end zero
  char text_rain[11]; // string UTF8 end zero
  char text_sunpower[11]; // string UTF8 end zero
  uint8_t led_1; // from 0 to 1

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__HARDSERIAL

#include <EEPROM.h>
#include <RemoteXY.h>
#include <NewPing.h>
#include <Servo.h>


#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600

//================================(defult)====================
#define servoPin A5
#define ULTRASONIC_SENSOR_TRIG 4
#define ULTRASONIC_SENSOR_ECHO 5

//================================(defult)====================
#define MAX_REGULAR_MOTOR_SPEED 150//75
#define MAX_MOTOR_ADJUST_SPEED 225//150
#define DISTANCE_TO_CHECK 30

//================================(defult)====================
NewPing mySensor(ULTRASONIC_SENSOR_TRIG, ULTRASONIC_SENSOR_ECHO, 400);
Servo myServo;

//================================(timer defult)====================



#define PIN_SWITCH_LIGHT 13
#define PIN_SWITCH_PUMP 3
#define PIN_SWITCH_SEEDS 12



//================================(rain sensor)====================
int Rain_signal = A0;

//========================(water level)==================================
//int Water_Level = A1;

//================================(sunpower sensor)====================
int sumpower = A2;


//================================(wind speed)====================
//float wind_speed = A3;
//float onlineGraph_wind_var1=0;
float onlineGraph_wind_var2=0;
float onlineGraph_wind_var3=0;
float maxW = 0;


//========================(DHT11)==================================
#include "DHT.h" 
#define DHTPIN 2 
DHT dht(DHTPIN, DHT11);
//====================================================================================

//================================(define right motor control pins)===================
int right_motor_A=8;
int right_motor_B=9;
int right_motor_speed=11; //enable pin

//================================(define left motor control pins)====================
int left_motor_A=6;
int left_motor_B=7;
int left_motor_speed=10; //enable pin

//=======================(define two arrays with a list of pins for each motor)=======
uint8_t RightMotor[3] = {right_motor_A, right_motor_B, right_motor_speed};
uint8_t LeftMotor[3] = {left_motor_A, left_motor_B, left_motor_speed};
 
//========================(speed control of motors)==================================
void Wheel (uint8_t * motor, int v) // v = motor speed, motor = pointer to an array of pins 
{
  if (v > 100) v=100;
  if (v < -100) v=-100;
  if (v > 0){

    digitalWrite (motor [0], HIGH);
    digitalWrite (motor [1], LOW);
    analogWrite (motor [2], v * 2.55);
  }
  else if ( v<0 ){

    digitalWrite (motor [0], LOW);
    digitalWrite (motor [1], HIGH);
    analogWrite (motor [2], (-v) * 2.55);
  }
  else{
    digitalWrite (motor [0], LOW);
    digitalWrite (motor [1], LOW);
    analogWrite (motor [2], 0);
  }
}


void setup() 
{

  RemoteXY_Init (); 


//================================(timer defult)====================


  //================================(defult)====================
//  myServo.attach(SERVO_PIN);  //error
//  myServo.write(90);
  // Set the servo to the 90-degree position
//  digitalWrite(servoPin, HIGH);
//  delayMicroseconds(1100); // 1.5 milliseconds
//  digitalWrite(servoPin, LOW);
//  delay(500);
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1500); // 1.5 milliseconds
  digitalWrite(servoPin, LOW);

  rotateMotor(0,0);   
  // TODO you setup code

  //===============================(initialization pins)==============================
  pinMode (right_motor_A, OUTPUT);
  pinMode (right_motor_B, OUTPUT);
  pinMode (right_motor_speed, OUTPUT);
  pinMode (left_motor_A, OUTPUT);
  pinMode (left_motor_B, OUTPUT);
  pinMode (left_motor_speed, OUTPUT);
  //===================================================================================
  pinMode (PIN_SWITCH_LIGHT, OUTPUT);
  pinMode (PIN_SWITCH_PUMP, OUTPUT);
  pinMode (PIN_SWITCH_SEEDS, OUTPUT);

//================================(wind speed)====================
pinMode(A3, INPUT);
digitalWrite(A3,EEPROM.read(10));

//================================(esp32)====================
//  Serial.begin(9600);
  
}







void loop() 
{


  
  RemoteXY_Handler ();

if (RemoteXY.select_defult==0){

    //============================(manage motors direction & speed)======================
  Wheel (RightMotor, RemoteXY.joystick_1_y - RemoteXY.joystick_1_x);
  Wheel (LeftMotor, RemoteXY.joystick_1_y + RemoteXY.joystick_1_x);
}

    //============================(defult mood)======================
if (RemoteXY.select_defult==2){
//int left_motor_speed0=6;
//int left_motor_A=10;
//myServo.attach(SERVO_PIN);

  int distance = mySensor.ping_cm();

  //If distance is within 30 cm then adjust motor direction as below
  if (distance > 0 && distance < DISTANCE_TO_CHECK)
  {
    //Stop motors
    rotateMotor(0, 0);
    delay(500);  
       
    //Reverse motors
    rotateMotor(-MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);        
    delay(200);
    
    //Stop motors
    rotateMotor(0, 0);
    delay(500);




    
    //Rotate servo to left    
//    myServo.write(180);

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(2400); // 2.0 milliseconds
  digitalWrite(servoPin, LOW);
    delay(500);
    

    //Read left side distance using ultrasonic sensor
    int distanceLeft = mySensor.ping_cm();    

    //Rotate servo to right
//    myServo.write(0); 
   
 // Set the servo to the 0-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(500); // 1.0 milliseconds//700
  digitalWrite(servoPin, LOW);
    delay(500);    

    //Read right side distance using ultrasonic sensor   
    int distanceRight = mySensor.ping_cm();

    //Bring servo to center
//    myServo.write(90); 

  // Set the servo to the 90-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1400); // 1.5 milliseconds/1200
  digitalWrite(servoPin, LOW);
  
  delay(500);    

    if (distanceLeft == 0 )
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceRight == 0 )
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceLeft >= distanceRight)
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);      
    }
    rotateMotor(0, 0);    
    delay(200);     
  }
  else
  {
    rotateMotor(MAX_REGULAR_MOTOR_SPEED, MAX_REGULAR_MOTOR_SPEED);
  }


  
}
    //============================(timer defult mood)======================
if (RemoteXY.select_defult==1){
int endMinute = atoi (RemoteXY.edit_km);  

// int currentMinute = timeClient.getMinutes();
//int currentHour = timeClient.getHours();

//  if (elapsedTime >= timerDuration)
{
    // Timer has expired, do something
//    Serial.println("Timer expired!");

    //========================================================
  int distance = mySensor.ping_cm();

  //If distance is within 30 cm then adjust motor direction as below
  if (distance > 0 && distance < DISTANCE_TO_CHECK)
  {
    //Stop motors
    rotateMotor(0, 0);
    delay(500);  
       
    //Reverse motors
    rotateMotor(-MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);        
    delay(200);
    
    //Stop motors
    rotateMotor(0, 0);
    delay(500);




    
    //Rotate servo to left    
//    myServo.write(180);

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(2400); // 2.0 milliseconds
  digitalWrite(servoPin, LOW);
    delay(500);
    

    //Read left side distance using ultrasonic sensor
    int distanceLeft = mySensor.ping_cm();    

    //Rotate servo to right
//    myServo.write(0); 
   
 // Set the servo to the 0-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(500); // 1.0 milliseconds//700
  digitalWrite(servoPin, LOW);
    delay(500);    

    //Read right side distance using ultrasonic sensor   
    int distanceRight = mySensor.ping_cm();

    //Bring servo to center
//    myServo.write(90); 

  // Set the servo to the 90-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1400); // 1.5 milliseconds/1200
  digitalWrite(servoPin, LOW);
  
  delay(500);    

    if (distanceLeft == 0 )
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceRight == 0 )
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceLeft >= distanceRight)
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);      
    }
    rotateMotor(0, 0);    
    delay(200);     
  }
  else
  {
    rotateMotor(MAX_REGULAR_MOTOR_SPEED, MAX_REGULAR_MOTOR_SPEED);
  }

    
  }
}


//========================(DHT11)==================================
float temp = dht.readTemperature();   
  float hum = dht.readHumidity(); 
  dtostrf(temp, 0, 1, RemoteXY.text_temp); 
  dtostrf(hum, 0, 1, RemoteXY.text_hum); 

//========================(DHT11)==================================
  if (temp<0) { 
    RemoteXY.level_temp_up = 0; 
    RemoteXY.level_temp_down = min (-temp*2,100); 
  } 
  else if (temp>0) { 
    RemoteXY.level_temp_up = min(temp*2,100); 
    RemoteXY.level_temp_down = 0; 
  } 
  else { 
    RemoteXY.level_temp_up = 0; 
    RemoteXY.level_temp_down = 0; 
  } 
  RemoteXY.level_hum = hum;
  

  //============================(rain)======================
 int Rain = analogRead(Rain_signal);
 if (Rain>700){
  Rain = 0;
 }
 Rain =Rain/10;
    RemoteXY.linear_rain = min(Rain*2,100);
    dtostrf(Rain, 0, 1, RemoteXY.text_rain);



    //========================(sumpower)==================================
    int   sumpowerA = analogRead(sumpower);
    sumpowerA = sumpowerA/10;
    RemoteXY.linear_sunpower = sumpowerA;
    dtostrf(sumpowerA, 0, 1, RemoteXY.text_sunpower);




    //================================(wind speed test)====================

    float volt = analogRead(A3);


    volt = (volt-580)/200  ;
    
    if (volt <0){
      volt = 0  ;
    }
    
    RemoteXY.onlineGraph_wind_var1 = volt;
  
  

    float wind = (volt*3/0.5*2.4);//

    RemoteXY.onlineGraph_wind_var2 = wind; // 204.8;
    
    if (wind>maxW){
     maxW = wind;
     RemoteXY.onlineGraph_wind_var3= max(wind, maxW);
     EEPROM.write(10,maxW);
    }

    dtostrf(wind, 0, 1, RemoteXY.text_wind);
    dtostrf(maxW, 0, 1, RemoteXY.text_max_wind);






  digitalWrite(PIN_SWITCH_LIGHT, (RemoteXY.switch_light==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_PUMP, (RemoteXY.switch_pump==1)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_SEEDS, (RemoteXY.switch_seeds==1)?LOW:HIGH);


    //========================(light rgb)==================================
  if (RemoteXY.switch_light!=0) {
     RemoteXY.led_1 = 1;
  }
  else {
      RemoteXY.led_1 = 0;
  }



  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 
}


void rotateMotor(int rightMotorSpeed, int leftMotorSpeed)
{
  if (RemoteXY.select_defult==2){
  if (rightMotorSpeed < 0)
  {
    digitalWrite(right_motor_A,LOW);
    digitalWrite(right_motor_B,HIGH);    
  }
  else if (rightMotorSpeed >= 0)
  {
    digitalWrite(right_motor_A,HIGH);
    digitalWrite(right_motor_B,LOW);      
  }

  if (leftMotorSpeed < 0)
  {
    digitalWrite(left_motor_A,LOW);
    digitalWrite(left_motor_B,HIGH);    
  }
  else if (leftMotorSpeed >= 0)
  {
    digitalWrite(left_motor_speed,HIGH);
    digitalWrite(left_motor_B,LOW);      
  }

  analogWrite(right_motor_speed, abs(rightMotorSpeed));
  analogWrite(left_motor_A, abs(leftMotorSpeed));    
}

}
