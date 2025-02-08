

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Depending on your servo make, the pulse width min and max may vary, you 
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  115 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  715 // this is the 'maximum' pulse length count (out of 4096)

//angle to code then my functions per servo:
int angleToPulse(int ang){
   int pulse = map(ang,0, 180, SERVOMIN,SERVOMAX);// map angle of 0 to 180 to Servo min and Servo max 
   Serial.print("Angle: ");Serial.print(ang);
   Serial.print(" pulse: ");Serial.println(pulse);
   return pulse;
}


void jaw_close () //normal
{
  pwm.setPWM(0,0, angleToPulse(15) ); // set jaw to 15 degrees, should be mouth closed
  delay (500); //small waiting period
}

void jaw_open () 
{
  //delay(500);
  pwm.setPWM(0,0, angleToPulse(40) ); // set jaw to 15 degrees, should be mouth closed
  delay (500); //small waiting period
}

void lip_normal () 
{
  pwm.setPWM(1,0, angleToPulse(90) ); // set LEFT to normal position
  pwm.setPWM(2,0, angleToPulse(55) ); // set RIGHT to normal position
  delay (500); //small waiting period
}

void lip_happy()
{
  pwm.setPWM(1,0, angleToPulse(10) ); // set left to HAPPY position
  pwm.setPWM(2,0, angleToPulse(90) ); // set right to HAPPY position
  delay (500); //small waiting period
}

void eyebrows_normal () 
{
  pwm.setPWM(3, 0, angleToPulse(90) ); // set LEFT eyebrow to normal position
  pwm.setPWM(4, 0, angleToPulse(90) ); // set RIGHT eyebrow to normal position
  delay (500); //small waiting period
}

void eyebrows_happy () 
{
  pwm.setPWM(3, 0, angleToPulse(110) ); // set LEFT eyebrow to happy position
  pwm.setPWM(4, 0, angleToPulse(70) ); // set RIGHT eyebrow to happy position
  delay (500); //small waiting period
}

void eyebrows_mad () 
{
  pwm.setPWM(3, 0, angleToPulse(60) ); // set LEFT eyebrow to mad position
  pwm.setPWM(4, 0, angleToPulse(130) ); // set RIGHT eyebrow to mad position
  delay (500); //small waiting period
}

void eyelid_normal () 
{
  pwm.setPWM(7, 0, angleToPulse(35) ); // set LEFT eyelid to normal position
  pwm.setPWM(8, 0, angleToPulse(35) ); // set RIGHT eyelid to normal position
  delay (500); //small waiting period
}

void eyelid_wide () 
{
  pwm.setPWM(7, 0, angleToPulse(15) ); // set LEFT eyelid to wide position
  pwm.setPWM(8, 0, angleToPulse(50) ); // set RIGHT eyelid to wide position
  delay (500); //small waiting period
}

void eyelid_close () 
{
  pwm.setPWM(7, 0, angleToPulse(90) ); // set LEFT eyelid to close position
  pwm.setPWM(8, 0, angleToPulse(0) ); // set RIGHT eyelid to close position
  delay (500); //small waiting period
}

void eyes_normal () 
{
  pwm.setPWM(9, 0, angleToPulse(80) ); // set eyes to normal position
  delay (500); //small waiting period
}

void eyes_up () 
{
  pwm.setPWM(9, 0, angleToPulse(55) ); // set eyes to up position
  delay (500); //small waiting period
}

void eyes_down () 
{
  pwm.setPWM(9, 0, angleToPulse(100) ); // set eyes to down position
  delay (500); //small waiting period
}

void normalize () 
{
  jaw_close();
  lip_normal();
  eyebrows_normal();
  eyelid_normal();
  eyes_normal();
}

