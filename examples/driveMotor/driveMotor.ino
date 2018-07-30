#include <pwm.h>

// Pin & object definition
#define M_PWML1 10
#define M_PWML2 11
DirectPWM M_PWM(10,11);
int PWMvalue = 100;

void setup() {
  Serial.begin(115200);
  int pwmMax = 100;
  M_PWM.PWM_Init(pwmMax);
  //M_PWM.Reverse();
}

void loop() {
  M_PWM.sendPwm(PWMvalue);
  
  Serial.print("PWM value: ");
  Serial.print(PWMvalue);

}
