void mydelay(volatile uint32_t x);
void init_timer_1();
void init_timer_2();

volatile uint32_t t1_flag = 0;
volatile uint32_t t2_flag = 0;
volatile uint16_t t2_count = 0;


void mydelay(volatile uint32_t x){
  for(volatile long i = 0; i<x; i++);
}

void init_timer_1(){
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

void init_timer_2(){
  volatile char *TIMER2_TCCR2A = (volatile char*)0xB1; //Timer control register A
  volatile char *TIMER2_TCCR2B = (volatile char*)0xB0; //Timer control register B
  volatile uint8_t *TIMER2_TCNT2 = (volatile uint8_t*)0xB2; //Counter register
  volatile uint8_t *TIMER2_OCR2A = (volatile uint8_t*)0xB3; //Compare register

  *TIMER2_TCCR2A = 0x02; //CTC mode
  *TIMER2_TCCR2B = 0x04; //Prescalar set to 64
  *TIMER2_TCNT2 = 0; //Clear the counter

  *TIMER2_OCR2A = 249; //Compare value
}
