void outData(char data);
void outControl(char data);
void mydelay(volatile uint32_t x);
void control_write(void);
void init_LCD(void);
void writeData(char data);
void write_string(char *ptr);

void outData(char data){
  volatile char* outA = (volatile char*)0x22;
  *outA = data;
}

void outControl(char data){
  volatile char* outB = (volatile char*)0x25;
  *outB = data;
}

void mydelay(volatile uint32_t x){
  for(volatile long i = 0; i<x; i++);
}

void control_write(void){
  outControl(0x01);
  mydelay(1);
  outControl(0x00);
  mydelay(1);
}

void init_LCD(void){
  outData(0x38);
  control_write();
  outData(0x0C);
  control_write();
  outData(0x01);
  control_write();
  outData(0x06);
  control_write();
}

void writeData(char data){
  outData(data);
  outControl(0x02);
  mydelay(1);
  outControl(0x03);
  mydelay(1);
  outControl(0x02);
  mydelay(1);
}
void write_string(char *ptr){
  while(*ptr != 0){
    writeData(*ptr);
    ptr++;
  }
}