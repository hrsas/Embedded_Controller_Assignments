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
  if(t1_flag) {
    t1_flag = 0;
    *outA ^= (1<<0);   
  }

  if(t2_flag) {
    t2_flag = 0;
    t2_count++;

    if(t2_count >= 15000) {   
        t2_count = 0;
        *outA ^= (1<<1);    
    }
  }

  if(t3_flag){
    t3_flag = 0;
    t3_count++;
    if(t3_count >= 4){
      t3_count = 0;
      *outA ^= (1 << 2);
    }
  }
}



