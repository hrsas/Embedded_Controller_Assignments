#include "etalvis.h"
char arr[10] = {0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110, 0b01101101,0b01111101,0b00000111, 0b01111111, 0b01100111};
char select[4] = {0x0E, 0x0D, 0x0B, 0x07};

const float BETA = 3950; // should match the Beta Coefficient of the thermistor

void setup() {
  // put your setup code here, to run once:
  ADC_Init();
  volatile char *dirK = (char*)0x107;
  volatile char *ddrA = (char*)0x21; 
  *ddrA = 0xFF;
  ddrA = 0x24;
  *ddrA = 0xFF;
  *dirK = 0x00; 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *data = (char*)0x22, *common = (char*)0x25;

  int analogValue = ADC_Read(8);
  float celsius = 1 / (log(1 / (1023. / analogValue - 1)) / BETA + 1.0 / 298.15) - 273.15;
  int ans = celsius;
    

  *data = arr[ans%10];
  *common = select[0];
  for(volatile long k = 0; k < 10000; k++);
  *common = 0x0F;
  for(volatile long k = 0; k < 1000; k++);

  ans = ans/10;

  *data = arr[ans%10];
  *common = select[1];
  for(volatile long k = 0; k < 10000; k++);
  *common = 0x0F;
  for(volatile long k = 0; k < 1000; k++);
}
