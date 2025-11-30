#include "etalvis.h"

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x00;
  volatile uint8_t *SWITCH_PCICR = (uint8_t*)0x68;
  volatile uint8_t *SWITCH_PCMSK0 = (uint8_t*)0x6B;
  *SWITCH_PCICR |= (1 << 0);    
  *SWITCH_PCMSK0 |= (1 << 0); 
  init_timer_1();
  init_timer_2();
} 
   
void loop() {  
  if((button_press&1) == 0) {
      if(t1_flag) {
          t1_flag = 0;
          *outA ^= (1<<0);   // LED1 blink with Timer1
      }

      if(t2_flag) {
          t2_flag = 0;
          t2_count++;
          if(t2_count >= 15000) {   
            t2_count = 0;
            *outA ^= (1<<1);    
        }
      }
  }else{
    if(t1_flag){
      t1_flag = 0;
      *outA ^= (1<<1);
    }

    if(t2_flag){
      t2_flag = 0;
      t1_count++;
      if(t1_count >= 15000){
        t1_count = 0;
        *outA ^= (1<<0);
      }
    }
  }
}



