#include "activity1.h"

int activity1(void)
{
DDRB |=(1<<PB0);
DDRD&=~(1<<PD2);
PORTD|=(1<<PD2);
DDRD&=~(1<<PD3);
PORTD|=(1<<PD3);

   if(ButtonOn&&HeaterOn)//checking the  condition for the sensor to start working.
        {
        LedOn;
        _delay_ms(2);
        return 1;
        }
        else{
        LedOff;
        _delay_ms(20);

        }
return 0;
}
