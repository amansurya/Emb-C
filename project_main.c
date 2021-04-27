

#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
DDRB |=(1<<PB0);//SET B0=1 FOR LED
    // Insert code
DDRD&=~(1<<PD0);//CLEAR BIT
PORTD|=(1<<PD0);
DDRD&=~(1<<PD1);//CLEAR BIT
PORTD|=(1<<PD1);
    while(1){
            if((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD1)))){
                PORTB |=(1<<PB0);

                //_delay_ms(2000);
            }
            else{
                 PORTB&=~(1<<PB0);
                 //_delay_ms(2000);
            }

    }
/**
* If the person is seated, the button sensor D0 will detect it and will be ON if seated.
* If we want the temperature sensor to be activated then button D1 will detect it and if both are 1 , the temperature sensor (represented by LED) will turn ON.
*/


    return 0;
}
