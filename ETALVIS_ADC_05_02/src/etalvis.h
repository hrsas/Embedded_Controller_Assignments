#define ADMUX (*(volatile uint8_t*)0x7C)
#define ADCSRA (*(volatile uint8_t*)0x7A)
#define ADCSRB (*(volatile uint8_t*)0x7B)
#define ADCL (*(volatile uint8_t*)0x78)
#define ADCH (*(volatile uint8_t*)0x79)

void ADC_Init() {
  ADMUX |= (1 << 6);
  ADCSRA |= (1 << 2) | (1 << 1) | (1 << 0);
  ADCSRA |= (1 << 7);
}

uint16_t ADC_Read(uint8_t channel) {

  ADCSRB |= (1 << 3);  
  ADMUX = (ADMUX & 0xF0) | (channel & 0x07); 

  ADCSRA |= (1 << 6);
  
  while (ADCSRA & (1 << 6)); 
  
  uint8_t low  = ADCL; 
  uint8_t high = ADCH;
  return (high << 8) | low;
}