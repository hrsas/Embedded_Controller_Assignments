void mydelay(volatile uint32_t x);

volatile char *outA = (volatile char*)0x22, *inB= (volatile char*)0x23;

void mydelay(volatile uint32_t x){
  for(volatile long i = 0; i<x; i++);
}

void init_timer(){
  volatile char *TIMER1_TCCR1A = (volatile char*)0x80;
  volatile char *TIMER1_TCCR1B = (volatile char*)0x81;
  volatile short *TIMER1_TCNT1 = (volatile short*)0x84;
  volatile short *TIMER1_OCR1A = (volatile short*)0x88;

  *TIMER1_TCCR1A = 0;
  *TIMER1_TCCR1B = 0;
  *TIMER1_TCNT1 = 0;

  *TIMER1_OCR1A = 60000;
  *TIMER1_TCCR1B = 0x0C;
}