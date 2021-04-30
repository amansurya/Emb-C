#include "activity3.h"
#include"activity2.h"


int activity3(uint16_t temp)
{
TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
DDRB|=(1<<PB1);


int temperature;
_delay_ms(2);
if(TEMP_COND_1)
{
OCR1A=204;
temperature=20;
_delay_ms(20);
}
if(TEMP_COND_2)
{
OCR1A=410;
temperature=25;
_delay_ms(20);
}
if(TEMP_COND_3)
{
OCR1A=717;
temperature=29;
_delay_ms(20);
}
if(TEMP_COND_4)
{
OCR1A=973;
temperature=33;
_delay_ms(20);
}
return(temperature);
}
