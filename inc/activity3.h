/**
 * @file activity3.h
 * @author Mangu Aman Surya
 * @brief header file for activity 3
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Activity3h
#define Activity3h

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief macro for temperature condtition 1
 * 
 */
#define Cond1Temp (temp>=0)&&(temp<=200)

/**
 * @brief macro for temperature condtition 2
 * 
 */
#define Cond2Temp (temp>=210)&&(temp<=500)

/**
 * @brief macro for temperature condtition 3
 * 
 */
#define Cond3Temp (temp>=510)&&(temp<=700)

/**
 * @brief macro for temperature condtition 4
 * 
 */
#define Cond4Temp (temp>=710)&&(temp<=1024)

/**
 * @brief calling function activity 3
 * 
 * @return int 
 */
int activity3(uint16_t);

#endif 
