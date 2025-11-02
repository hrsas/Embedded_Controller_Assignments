#include "etalvis.h"

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA = (char*)0x21, *ddrB = (char*) 0x24;
  *ddrA = 0xFF; *ddrB = 0x03;
  init_LCD();
} 
   
void loop() {
  outData(0x80);
  control_write();
  write_string("Welcome");
}

void write_string(char *ptr){
  while(*ptr != 0){
    writeData(*ptr);
    ptr++;
  }
}
