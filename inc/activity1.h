/**
 * @file activity1.h
 * @author Mangu Aman Surya
 * @brief Header file of activity 1
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Activity1H
#define Activity1H

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief macro for button on
 * 
 */
#define ButtonOn !(PIND&(1<<PD2))

/**
 * @brief macro for heater on
 * 
 */
#define HeaterOn !(PIND&(1<<PD3))

/**
 * @brief macro for LED on
 * 
 */
#define LedOn PORTB|=(1<<PB0)

/**
 * @brief macro for LED off
 * 
 */
#define LedOff PORTB&=~(1<<PB0)

/**
 * @brief calling function of activity 1
 * 
 * @return int 
 */
int activity1(void);

#endif 
