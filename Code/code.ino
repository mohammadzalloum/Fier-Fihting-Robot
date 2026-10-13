// Fier Robot - ESP32 controller with RemoteXY, sensors, motors, and servo arm.
// RemoteXY uses the ESP32 Wi-Fi access-point mode.
#define REMOTEXY_MODE__WIFI_POINT

#include <WiFi.h>

#define REMOTEXY_WIFI_SSID "fier_robot"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377

#include <RemoteXY.h>

// RemoteXY generated GUI configuration and variable mappings.
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 1876 bytes
  { 255,40,0,35,0,77,7,19,0,0,0,0,31,2,106,200,200,84,8,3,
  0,1,0,1,2,2,2,10,0,131,1,193,3,3,254,82,3,3,10,16,
  31,31,110,111,110,101,95,112,97,103,101,0,0,0,130,1,65,104,74,10,
  30,110,52,11,17,4,19,84,87,16,25,44,92,11,128,2,26,4,19,102,
  87,16,25,57,92,11,128,2,26,4,19,66,87,16,25,31,92,11,128,2,
  26,129,3,126,14,6,12,73,10,5,64,8,83,112,105,110,0,129,4,70,
  12,7,13,34,9,5,64,8,108,97,115,116,0,129,4,89,11,6,13,47,
  9,5,64,8,109,105,100,0,129,2,107,15,6,11,60,13,5,64,8,100,
  111,119,110,0,4,19,120,87,16,26,70,91,11,128,2,26,28,0,130,3,
  65,55,49,5,31,51,50,11,17,73,32,73,16,27,32,37,14,31,4,128,
  0,49,26,0,0,0,0,0,0,200,66,0,0,0,0,73,11,73,16,27,
  14,37,14,31,4,128,0,119,26,0,0,0,0,0,0,200,66,0,0,0,
  0,130,61,65,44,49,59,31,34,50,11,17,2,65,79,24,12,62,47,19,
  10,1,2,26,31,31,79,78,0,79,70,70,0,129,14,66,31,7,20,32,
  13,5,64,8,68,101,116,101,99,116,111,114,115,0,129,70,66,24,7,70,
  33,12,5,64,8,76,105,103,104,116,0,129,33,108,15,5,32,75,15,5,
  64,8,70,108,97,109,101,32,0,129,14,108,10,5,16,75,10,5,64,8,
  71,97,115,32,0,129,73,74,12,5,67,43,17,4,64,24,104,101,97,100,
  108,105,103,104,116,0,130,2,116,102,22,95,31,25,50,11,17,129,45,117,
  19,5,99,33,18,5,64,8,83,101,116,116,105,110,103,115,0,7,5,128,
  20,8,98,42,19,4,80,64,8,26,129,7,122,16,6,104,39,8,3,64,
  8,65,110,103,101,108,0,12,31,128,32,8,98,52,20,5,192,30,26,106,
  111,121,115,116,105,99,107,0,65,114,114,111,119,115,0,129,38,123,17,5,
  101,48,13,4,64,8,67,111,110,116,114,111,108,0,65,68,127,11,10,104,
  63,8,6,114,129,66,123,14,5,102,59,12,4,64,8,115,116,97,116,117,
  115,0,129,76,94,17,5,68,63,14,4,64,24,116,97,105,108,108,105,103,
  104,116,0,2,65,99,24,12,62,67,19,10,1,2,26,31,31,79,78,0,
  79,70,70,0,70,91,80,11,11,82,47,9,10,18,26,180,0,70,91,100,
  11,11,82,67,9,10,18,26,1,0,10,83,127,8,10,99,73,8,7,49,
  4,26,31,79,78,0,31,79,70,70,0,129,83,123,7,4,101,70,5,3,
  64,8,67,97,114,0,10,93,127,8,10,109,73,8,7,49,4,26,31,79,
  78,0,31,79,70,70,0,129,93,123,8,4,110,70,6,3,64,8,65,114,
  109,0,67,11,100,16,7,14,68,14,6,70,2,26,11,67,32,100,16,7,
  32,68,14,6,70,2,26,11,22,0,130,56,13,49,24,93,10,39,18,11,
  17,3,69,19,22,12,102,14,20,11,130,2,26,131,8,2,21,9,47,1,
  40,7,2,17,2,31,115,108,105,100,101,114,0,153,169,131,54,2,21,9,
  129,1,40,7,2,17,2,31,115,101,110,115,111,114,115,0,150,169,131,77,
  2,21,9,6,1,40,7,2,17,2,31,65,114,97,98,105,99,0,89,170,
  130,1,39,104,24,134,10,34,18,11,17,130,3,13,51,24,5,10,86,18,
  11,17,1,70,45,16,16,64,14,12,12,0,2,31,0,1,53,45,16,16,
  50,14,12,12,0,2,31,0,1,2,45,16,16,8,14,12,12,0,2,31,
  0,1,36,45,16,16,36,14,12,12,0,2,31,0,1,87,45,16,16,78,
  14,12,12,0,2,31,0,1,19,45,16,16,22,14,12,12,0,2,31,0,
  131,31,2,21,9,88,1,40,7,2,17,2,31,97,114,114,111,119,115,0,
  154,105,2,11,19,35,16,138,15,27,11,1,2,26,31,31,79,78,0,79,
  70,70,0,130,67,142,35,54,122,30,21,52,11,17,1,70,174,14,20,123,
  39,9,13,1,2,31,0,1,70,149,14,22,133,39,9,13,1,2,31,0,
  4,86,143,15,50,128,52,9,27,0,2,26,129,71,158,12,5,124,45,7,
  3,64,8,111,112,101,110,0,129,71,182,12,5,134,45,8,3,64,8,99,
  108,111,115,101,0,129,77,143,15,6,128,32,10,4,64,8,72,97,110,100,
  0,11,0,129,69,14,29,6,105,11,15,3,64,8,216,167,217,132,217,136,
  216,182,216,185,32,216,167,217,132,216,170,217,132,217,130,216,167,216,166,217,
  138,0,129,44,40,17,6,44,11,11,4,64,8,216,165,216,172,216,177,216,
  167,216,161,216,167,216,170,0,129,86,32,8,4,114,25,6,3,64,8,216,
  170,217,132,217,130,216,167,216,166,217,138,0,129,72,31,8,5,104,25,5,
  3,64,8,216,170,216,173,217,131,217,133,0,129,20,13,17,8,147,11,9,
  4,64,8,217,133,216,182,216,174,216,169,0,129,6,50,9,7,11,18,7,
  5,64,8,217,134,217,129,217,130,0,129,22,51,12,5,24,18,10,4,64,
  8,217,133,216,179,216,170,217,130,217,138,217,133,0,129,40,50,9,7,39,
  18,7,5,64,8,216,179,217,132,216,169,0,129,57,50,8,7,53,18,6,
  5,64,8,217,130,217,133,216,169,0,129,74,50,10,6,66,18,8,5,64,
  8,217,136,216,179,216,183,0,129,90,50,10,6,80,18,9,5,64,8,216,
  173,217,129,216,177,216,169,0,11,0,129,21,14,14,5,146,11,11,4,64,
  8,80,117,109,112,0,129,67,31,11,5,102,25,7,3,64,8,85,115,101,
  114,0,129,82,31,14,5,113,25,8,3,64,8,68,101,102,117,108,116,0,
  129,69,14,28,5,104,11,17,3,64,8,68,101,102,117,108,116,32,109,111,
  111,100,0,129,42,40,19,6,42,11,11,3,64,8,82,111,117,116,105,110,
  115,0,129,4,52,12,4,10,19,9,3,64,8,116,117,110,110,101,108,0,
  129,20,52,14,4,22,19,11,3,64,8,115,116,114,97,105,103,104,116,0,
  129,38,52,12,4,37,19,9,3,64,8,98,97,115,107,101,116,0,129,57,
  51,8,5,53,18,6,4,64,8,116,111,112,0,129,72,52,13,4,65,19,
  10,3,64,8,109,105,100,100,108,101,0,129,90,51,10,5,81,19,6,3,
  64,8,104,111,108,101,0,1,0,5,3,140,52,52,144,33,42,42,42,2,
  26,31,8,0,1,20,140,23,23,144,48,16,15,2,2,31,0,1,20,175,
  23,23,157,61,16,15,2,2,31,0,1,39,157,23,23,170,48,16,15,2,
  2,31,0,1,1,157,23,23,157,34,16,15,2,2,31,0,129,27,144,10,
  18,162,37,7,11,64,31,226,172,134,0,129,27,180,10,18,162,65,7,11,
  64,31,226,172,135,0,129,2,161,18,18,147,51,11,11,64,31,226,172,133,
  0,129,43,160,18,18,173,51,11,11,0,31,226,174,149,0,21,0,130,2,
  66,102,73,9,30,112,52,11,17,1,43,72,22,22,47,37,36,11,2,2,
  31,0,1,43,96,22,22,47,53,36,11,2,2,31,0,1,64,120,35,18,
  80,67,40,11,2,2,31,0,1,8,120,35,18,10,67,40,11,2,2,31,
  0,129,49,76,10,18,63,38,6,10,64,31,226,172,134,0,129,49,100,10,
  18,63,55,6,10,64,31,226,172,135,0,129,15,120,20,20,24,67,13,13,
  64,31,226,172,133,0,129,74,121,18,18,96,67,13,13,0,31,226,174,149,
  0,1,8,96,22,22,10,53,36,11,2,2,31,0,129,14,99,10,18,26,
  55,6,10,64,31,226,172,135,0,1,8,72,22,22,10,37,36,11,2,2,
  31,0,129,14,76,10,18,26,38,6,10,64,31,226,172,134,0,1,77,96,
  22,22,84,53,36,11,2,2,31,0,129,83,100,10,18,100,55,6,10,64,
  31,226,172,135,0,1,77,72,22,22,84,37,36,11,2,2,31,0,129,83,
  75,10,18,100,38,6,10,64,31,226,172,134,0,129,48,126,12,6,60,70,
  12,6,64,8,115,112,105,110,0,129,82,67,12,6,98,33,8,4,64,8,
  76,97,115,116,0,129,49,67,11,6,62,33,7,4,64,8,77,105,100,0,
  129,11,67,16,6,23,33,11,4,64,8,68,111,119,110,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t A; // =1 if page is visible, else =0
  uint8_t car_joystick; // =1 if page is visible, else =0
  uint8_t car_arrows; // =1 if page is visible, else =0
  uint8_t arrows_arm; // =1 if page is visible, else =0
  int8_t slider_mid; // from 0 to 100
  int8_t slider_down; // from 0 to 100
  int8_t slider_last; // from 0 to 100
  int8_t slider_Spin; // from 0 to 100
  uint8_t switch_headlight; // =1 if switch ON and =0 if OFF
  int16_t edit_01; // -32768 .. +32767
  uint8_t optionSelector_01; // from 0 to 2
  uint8_t switch_taillight; // =1 if switch ON and =0 if OFF
  uint8_t pushSwitch_car; // =1 if state is ON, else =0
  uint8_t pushSwitch_arm; // =1 if state is ON, else =0
  uint8_t selector_defult; // from 0 to 2
  uint8_t button_middle; // =1 if button pressed, else =0
  uint8_t button_top; // =1 if button pressed, else =0
  uint8_t button_tunnel; // =1 if button pressed, else =0
  uint8_t button_basket; // =1 if button pressed, else =0
  uint8_t button_hole; // =1 if button pressed, else =0
  uint8_t button_straight; // =1 if button pressed, else =0
  uint8_t pump; // =1 if switch ON and =0 if OFF
  uint8_t button_open; // =1 if button pressed, else =0
  uint8_t button_close; // =1 if button pressed, else =0
  int8_t slider_hand; // from 0 to 100
  int8_t joystick_car_x; // from -100 to 100
  int8_t joystick_car_y; // from -100 to 100
  uint8_t button_up; // =1 if button pressed, else =0
  uint8_t button_down; // =1 if button pressed, else =0
  uint8_t button_right; // =1 if button pressed, else =0
  uint8_t button_left; // =1 if button pressed, else =0
  uint8_t button_mid_u; // =1 if button pressed, else =0
  uint8_t button_mid_d; // =1 if button pressed, else =0
  uint8_t button_spin_right; // =1 if button pressed, else =0
  uint8_t button_spin_left; // =1 if button pressed, else =0
  uint8_t button_down_d; // =1 if button pressed, else =0
  uint8_t button_down_u; // =1 if button pressed, else =0
  uint8_t button_last_d; // =1 if button pressed, else =0
  uint8_t button_last_u; // =1 if button pressed, else =0

    // output variables
  float linearbar_flame; // from 0 to 100
  float linearbar_gas; // from 0 to 100
  uint8_t led_01_r; // =0..255 LED Red brightness
  uint8_t led_01_g; // =0..255 LED Green brightness
  uint8_t led_01_b; // =0..255 LED Green brightness
  uint8_t led_headlight; // from 0 to 1
  uint8_t led_taillight; // from 0 to 1
  char value_gas[11]; // string UTF8 end zero
  char value_flame[11]; // string UTF8 end zero

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0
} RemoteXY;   
#pragma pack(pop)

// Sensor input pins.
int Flam_analog = 33;

int Gas_analog = 34;

int flame_analog = 33;

// Arm control state, joint positions, and gripper position.
int one_time_joystick = 1;
int one_time_arrows = 1;
int one_time_slider = 1;
int spin = 0;
int down = 0;
int mid = 0;
int last = 0;

int b_hand = 0;

int max1 = 0;
int min1 = 0;

// Digital output and relay pin assignments.
#define PIN_PUMP 32

#define PIN_SWITCH_HEADLIGHT 18
#define PIN_SWITCH_TAILLIGHT 39
#define PIN_PUSHSWITCH_CAR 5
#define PIN_PUSHSWITCH_ARM 17

// PCA9685 servo driver and pulse-width calibration.
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  125
#define SERVOMAX  575
uint8_t servonum = 0;

#define PIN_SWITCH_LIGHT 14
#define PIN_SWITCH_NONE 27

// Motor control pins and pin arrays.
int right_motor_A = 13;
int right_motor_B = 26;
int right_motor_speed = 15;

int left_motor_A = 0;
int left_motor_B = 4;
int left_motor_speed = 12;

uint8_t RightMotor[3] = {right_motor_A, right_motor_B, right_motor_speed};
uint8_t LeftMotor[3] = {left_motor_A, left_motor_B, left_motor_speed};

// Color sensor calibration values (retained as in the original sketch).
int redMin = 272;
int redMax = 1662;
int greenMin = 305;
int greenMax = 1696;
int blueMin = 271;
int blueMax = 1349;

int redPW = 0;
int greenPW = 0;
int bluePW = 0;

int redValue;
int greenValue;
int blueValue;

// Initialize RemoteXY, the servo driver, digital outputs, and drive motors.
void setup()
{
  RemoteXY_Init();
  RemoteXY.car_joystick = 1;

  RemoteXY.pushSwitch_arm = 1;

  Serial.begin(9600);

  pwm.begin();
  pwm.setPWMFreq(60);

  Serial.begin(9600);

  pinMode(PIN_SWITCH_LIGHT, OUTPUT);
  pinMode(PIN_SWITCH_NONE, OUTPUT);

  pinMode(PIN_PUMP, OUTPUT);

  pinMode(PIN_SWITCH_HEADLIGHT, OUTPUT);
  pinMode(PIN_SWITCH_TAILLIGHT, OUTPUT);
  pinMode(PIN_PUSHSWITCH_CAR, OUTPUT);
  pinMode(PIN_PUSHSWITCH_ARM, OUTPUT);

  pinMode(right_motor_A, OUTPUT);
  pinMode(right_motor_B, OUTPUT);
  pinMode(right_motor_speed, OUTPUT);
  pinMode(left_motor_A, OUTPUT);
  pinMode(left_motor_B, OUTPUT);
  pinMode(left_motor_speed, OUTPUT);
}

// Process RemoteXY commands and update the robot hardware.
void loop()
{
  RemoteXY_Handler();

  // Flame sensor reading and UI display.
  int FlamSensorAnalog = analogRead(Flam_analog);

  FlamSensorAnalog = 4095 - FlamSensorAnalog;

  if (FlamSensorAnalog <= 500)
  {
    FlamSensorAnalog = 0;
  }
  else
  {
    FlamSensorAnalog = map(FlamSensorAnalog, 0, 4095, 0, 100);
  }
  RemoteXY.linearbar_flame = min(FlamSensorAnalog, 100);
  dtostrf(FlamSensorAnalog, 0, 1, RemoteXY.value_flame);

  // Gas sensor reading, offset, and UI display.
  int gassensorAnalog = analogRead(Gas_analog);

  Serial.print("Gas Sensor: ");
  Serial.print(gassensorAnalog);
  Serial.print("\t");
  gassensorAnalog -= 2740;

  if (gassensorAnalog <= 5)
  {
    gassensorAnalog = 0;
  }
  else
  {
    gassensorAnalog += 30;
  }

  Serial.print("Gas Sensor: ");
  Serial.print(gassensorAnalog);
  Serial.print("\t");
  Serial.print("\n ");

  RemoteXY.linearbar_gas = min(gassensorAnalog, 100);
  dtostrf(gassensorAnalog, 0, 1, RemoteXY.value_gas);

  // Additional analog flame reading and serial output.
  int flame = analogRead(flame_analog);

  Serial.print("Gas Sensor: ");
  Serial.print(flame);
  Serial.print("\t");

  Serial.print("Gas Sensor: ");
  Serial.print(flame);
  Serial.print("\t");
  Serial.print("\n ");

  RemoteXY.linearbar_gas = min(gassensorAnalog, 100);
  dtostrf(gassensorAnalog, 0, 1, RemoteXY.value_gas);

  // Gripper open/close buttons and hand slider.
  if (RemoteXY.button_open == 1 && b_hand < 100)
  {
    b_hand += 3;
    RemoteXY.button_open = 0;
  }

  if (RemoteXY.button_close == 1 && b_hand > 0)
  {
    b_hand -= 3;
    RemoteXY.button_close = 0;
  }
  pwm.setPWM(10, 0, angleToPulse(b_hand + 20 * 1.8));
  pwm.setPWM(11, 0, angleToPulse(RemoteXY.slider_hand   * 1.8));

  // Arm joints controlled by incremental arrow buttons.
  if (RemoteXY.arrows_arm == 1)
  {
    if (one_time_arrows == 1)
    {
      spin = RemoteXY.slider_Spin;
      down = RemoteXY.slider_down;
      mid = RemoteXY.slider_mid;
      last = RemoteXY.slider_last;
      one_time_arrows = 0;
      one_time_joystick = 1;
      one_time_slider = 1;
    }

    if (RemoteXY.button_spin_right == 1 && spin < 100)
    {
      spin += 1;
      RemoteXY.button_spin_right = 0;
    }

    if (RemoteXY.button_spin_left == 1 && spin > 0)
    {
      spin -= 1;
      RemoteXY.button_spin_left = 0;
    }

    if (RemoteXY.button_down_u == 1 && down < 100)
    {
      down += 1;
      RemoteXY.button_down_u = 0;
    }

    if (RemoteXY.button_down_d == 1 && down > 0)
    {
      down -= 1;
      RemoteXY.button_down_d = 0;
    }

    if (RemoteXY.button_mid_u == 1 && mid < 100)
    {
      mid += 1;
      RemoteXY.button_mid_u = 0;
    }

    if (RemoteXY.button_mid_d == 1 && mid > 0)
    {
      mid -= 1;
      RemoteXY.button_mid_d = 0;
    }

    if (RemoteXY.button_last_u == 1 && last < 100)
    {
      last += 1;
      RemoteXY.button_last_u = 0;
    }

    if (RemoteXY.button_last_d == 1 && last > 0)
    {
      last -= 1;
      RemoteXY.button_last_d = 0;
    }

    pwm.setPWM(15, 0, angleToPulse(spin   * 1.8));
    pwm.setPWM(14, 0, angleToPulse(down   * 1.0));
    pwm.setPWM(13, 0, angleToPulse(mid   * 1.0));
    pwm.setPWM(12, 0, angleToPulse(180 - last   * 1.0));
  }

  // Arm joints controlled by sliders.
  if (RemoteXY.A == 1)
  {
    if (one_time_slider == 1)
    {
      RemoteXY.slider_Spin = spin;
      RemoteXY.slider_down = down;
      RemoteXY.slider_mid = mid;
      RemoteXY.slider_last = last;
      one_time_arrows = 1;
      one_time_joystick = 1;
      one_time_slider = 0;
    }
    pwm.setPWM(15, 0, angleToPulse(RemoteXY.slider_Spin   * 1.8));
    pwm.setPWM(14, 0, angleToPulse(RemoteXY.slider_down   * 1.0));
    pwm.setPWM(13, 0, angleToPulse(RemoteXY.slider_mid   * 1.0));
    pwm.setPWM(12, 0, angleToPulse(180 - RemoteXY.slider_last   * 1.0));
  }

  rotins();

  // Manual drive controls: joystick or directional buttons.
  if (RemoteXY.selector_defult == 0)
  {
    if (RemoteXY.optionSelector_01 == 0)
    {
      RemoteXY.car_joystick = 1;
      RemoteXY.car_arrows = 0;
      Wheel(RightMotor, RemoteXY.joystick_car_y - RemoteXY.joystick_car_x);
      Wheel(LeftMotor, RemoteXY.joystick_car_y + RemoteXY.joystick_car_x);
    }
    else
    {
      RemoteXY.car_joystick = 0;
      RemoteXY.car_arrows = 1;

      if (RemoteXY.button_up == 1)
      {
        Wheel(RightMotor, 50);
        Wheel(LeftMotor, 50);
      }

      else if (RemoteXY.button_down == 1)
      {
        Wheel(RightMotor, -50);
        Wheel(LeftMotor, -50);
      }

      else if (RemoteXY.button_right == 1)
      {
        Wheel(RightMotor, 0);
        Wheel(LeftMotor, 50);
      }

      else if (RemoteXY.button_left == 1)
      {
        Wheel(RightMotor, 50);
        Wheel(LeftMotor, 0);
      }

      else
      {
        Wheel(RightMotor, 0);
        Wheel(LeftMotor, 0);
      }
    }
  }

  else
  {
  }

  // Update pump and switching outputs from the RemoteXY controls.
  digitalWrite(PIN_PUMP, (RemoteXY.pump == 1) ? LOW : HIGH);

  digitalWrite(PIN_SWITCH_HEADLIGHT, (RemoteXY.switch_headlight == 1) ? LOW : HIGH);
  digitalWrite(PIN_SWITCH_TAILLIGHT, (RemoteXY.switch_taillight == 0) ? LOW : HIGH);
  digitalWrite(PIN_PUSHSWITCH_CAR, (RemoteXY.pushSwitch_car == 1) ? LOW : HIGH);
  digitalWrite(PIN_PUSHSWITCH_ARM, (RemoteXY.pushSwitch_arm == 1) ? LOW : HIGH);
}

// Convert servo angles to PCA9685 pulse counts.
int angleToPulse(int ang)
{
  int pulse = map(ang, 0, 180, SERVOMIN, SERVOMAX);
  return pulse;
}

// Predefined servo positions for the tunnel, straight, and basket presets.
void rotins()
{
  if (RemoteXY.button_tunnel == 1)
  {
    delay(20);
    RemoteXY.slider_Spin = 294;
    delay(20);
    RemoteXY.slider_down = 150;
    delay(20);
    RemoteXY.slider_mid = 600;
    delay(20);
    RemoteXY.slider_last = 561;
    delay(20);
    RemoteXY.button_tunnel = 0;
  }

  if (RemoteXY.button_straight == 1)
  {
    delay(20);
    RemoteXY.slider_Spin = 294;
    delay(20);
    RemoteXY.slider_down = 390;
    delay(20);
    RemoteXY.slider_mid = 198;
    delay(20);
    RemoteXY.slider_last = 516;
    delay(20);
    RemoteXY.button_straight = 0;
  }

  if (RemoteXY.button_basket == 1)
  {
    RemoteXY.slider_Spin = 288;
    delay(20);
    RemoteXY.slider_down = 360;
    delay(20);
    RemoteXY.slider_mid = 252;
    delay(20);
    RemoteXY.slider_last = 186;
    delay(20);
    RemoteXY.button_basket = 0;
  }
}

// Limit motor speed and set direction for each wheel.
void Wheel(uint8_t * motor, int v)
{
  if (v > 100) v = 100;
  if (v < -100) v = -100;
  if (v > 0)
  {
    digitalWrite(motor[0], HIGH);
    digitalWrite(motor[1], LOW);
    analogWrite(motor[2], v * 2.55);
  }
  else if (v < 0)
  {
    digitalWrite(motor[0], LOW);
    digitalWrite(motor[1], HIGH);
    analogWrite(motor[2], (-v) * 2.55);
  }
  else
  {
    digitalWrite(motor[0], LOW);
    digitalWrite(motor[1], LOW);
    analogWrite(motor[2], 0);
  }
}
