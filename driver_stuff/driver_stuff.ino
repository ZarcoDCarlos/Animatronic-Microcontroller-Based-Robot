#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include "Robot_Functions.h"

// called this way, it uses the default address 0x40

// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);



// NOTE: eyes must close after being open wide or open normally for proper function!

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel Servo test!");

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  normalize();

  //yield();
}

// the code inside loop() has been updated by Robojax
void loop() {

  jaw_close();
  jaw_open();
  jaw_close();
  jaw_open();
  jaw_close();
  jaw_open();

  lip_normal();
  lip_happy();
  lip_normal();

  eyebrows_normal();
  eyebrows_happy();
  eyebrows_mad();

  eyelid_normal();
  eyelid_close();
  eyelid_wide();
  eyelid_close();
  eyelid_normal();
 
  eyes_normal();
  eyes_up();
  eyes_down();
}

