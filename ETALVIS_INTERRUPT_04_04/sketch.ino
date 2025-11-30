#include "etalvis.h"

volatile char *outA = (volatile char*)0x22, *inB= (volatile char*)0x23;
volatile char button_press = 0;
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x00;
  init_timer_1();
  init_timer_2();
} 
   
void loop() {  
  if((*inB & 1) == 1){
    button_press ^= 1;
  }

  if(button_press == 0) {
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



