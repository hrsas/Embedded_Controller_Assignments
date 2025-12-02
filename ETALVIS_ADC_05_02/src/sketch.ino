#include "etalvis.h"

const float BETA = 3950; 

void setup() {
  // put your setup code here, to run once:
  volatile uint8_t *dirF = (volatile uint8_t*) 0x30;
  *dirF = 0x01;
  ADC_Init();
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *data = (char*)0x31;

  int analogValue = ADC_Read(8);
  float celsius = 1 / (log(1 / (1023. / analogValue - 1)) / BETA + 1.0 / 298.15) - 273.15;
  int ans = celsius;
  
  if(celsius < 25){
    *data = 1;
  }

  if(celsius > 36){
    *data = 0;
  }

}
