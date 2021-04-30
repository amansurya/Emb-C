#include "activity2.h"

void InitADC()
{
SetReferenceVoltage;
AdcPrescaleEnable;
}

uint16_t ReadADC(uint8_t ch)
{
ADMUX&=0Xf8;
ch=ch&0b00000111;
ADMUX=ch;

ADCSRA|=(1<<ADSC);

while(!(ADCSRA&(1<<ADIF)));
SetInteruptFlag;
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
