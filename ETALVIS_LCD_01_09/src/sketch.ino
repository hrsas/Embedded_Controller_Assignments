#include "etalvis.h"

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x03;
  init_LCD();
} 
   
void loop() {
  for (int i = 0; i < 10; i++) {
    outData(0x01);        
    control_write();
    mydelay(500);

    outData(0xC0 + (i)); 
    control_write();
    write_string("WELCOME");               
    mydelay(50000);                
  }
}

void write_string(char *ptr){
  while(*ptr != 0){
    writeData(*ptr);
    ptr++;
  }
}
