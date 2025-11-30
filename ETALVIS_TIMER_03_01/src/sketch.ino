#include "etalvis.h"

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x00;
  init_timer();
} 
   
void loop(){
  volatile uint8_t *TIMER_TIFR1 = (uint8_t*)0x36;

  if(*TIMER_TIFR1 & (1<<1))   // Check OCF1A flag
  {
    *TIMER_TIFR1 |= (1<<1);   

    *outA = 0x01;
    mydelay(10000);

    *outA = 0x00;
    mydelay(10000);
  }
}

