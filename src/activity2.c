#include "activity2.h"

void InitADC()
{
REFERENCE_VOLTAGE_SET;
ADC_ENABLE_PRESCALE;
}

uint16_t ReadADC(uint8_t ch)
{
ADMUX&=0Xf8;
ch=ch&0b00000111;
ADMUX=ch;

ADCSRA|=(1<<ADSC);

while(!(ADCSRA&(1<<ADIF)));
SET_ADC_INTRPT_FLAG;
return(ADC);
}
int activity2(void)
{
InitADC();

while(1)
{
uint16_t temp;
temp= ReadADC(0);
_delay_ms(2);
return (temp);

}
}
