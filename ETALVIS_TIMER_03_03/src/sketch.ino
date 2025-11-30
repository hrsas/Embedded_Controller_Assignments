#include "etalvis.h"

volatile char *outA = (volatile char*)0x22, *inB= (volatile char*)0x23;

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x00;
  init_timer_1();
  init_timer_2();
  init_timer_3();
} 
   
void loop() {  
  volatile uint8_t *TIMER_TIFR1 = (uint8_t*)0x36;
  volatile uint8_t *TIMER_TIFR2 = (uint8_t*)0x37;
  volatile uint8_t *TIMER_TIFR3 = (uint8_t*)0x38;

  if(*TIMER_TIFR1 & (1<<1))   // Check OCF1A flag
  {
    *TIMER_TIFR1 |= (1<<1);   

    *outA = 0x01;
    mydelay(10000);

    *outA = 0x00;
    mydelay(10000);
  }

  if(*TIMER_TIFR2 & (1<<1))   // Check OCF2A flag
  {
    *TIMER_TIFR2 |= (1<<1);   

    t2_count++;

    if(t2_count >= 15000) {   
      t2_count = 0;
      *outA ^= (1<<1);    
    }
  }
  if(*TIMER_TIFR3 & (1<<1))   // Check OCF3A flag
  {
    *TIMER_TIFR3 |= (1<<1);   

    t3_count++;
    if(t3_count >= 4){
      t3_count = 0;
      *outA ^= (1 << 2);
    }
  }
}



