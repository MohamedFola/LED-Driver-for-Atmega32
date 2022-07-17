/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : PORT                      ************/
/*************************************************************/
/*************************************************************/

#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_


/*
PORT_INIT_DIR | PORT_INIT_VALUE |    PIN STATE
--------------|-----------------|------------------
	   0	  |        0        |    Input Floating
	   0	  |        1        |    Input Pullup
	   1	  |        0        |    Output Low
	   1	  |        1        |    Output High
*/

/*---------------------------------------------------*/

/*
Choose PIN_DIR_INPUT  for : INPUT
Choose PIN_DIR_OUTPUT for : OUTPUT
*/

#define PORTA_PIN0_DIR                 PIN_DIR_INPUT
#define PORTA_PIN1_DIR                 PIN_DIR_INPUT
#define PORTA_PIN2_DIR                 PIN_DIR_INPUT
#define PORTA_PIN3_DIR                 PIN_DIR_INPUT
#define PORTA_PIN4_DIR                 PIN_DIR_INPUT
#define PORTA_PIN5_DIR                 PIN_DIR_INPUT
#define PORTA_PIN6_DIR                 PIN_DIR_INPUT
#define PORTA_PIN7_DIR                 PIN_DIR_INPUT
 
 
#define PORTB_PIN0_DIR                 PIN_DIR_INPUT
#define PORTB_PIN1_DIR                 PIN_DIR_INPUT
#define PORTB_PIN2_DIR                 PIN_DIR_INPUT
#define PORTB_PIN3_DIR                 PIN_DIR_INPUT
#define PORTB_PIN4_DIR                 PIN_DIR_INPUT
#define PORTB_PIN5_DIR                 PIN_DIR_INPUT
#define PORTB_PIN6_DIR                 PIN_DIR_INPUT
#define PORTB_PIN7_DIR                 PIN_DIR_INPUT


#define PORTC_PIN0_DIR                 PIN_DIR_INPUT
#define PORTC_PIN1_DIR                 PIN_DIR_INPUT
#define PORTC_PIN2_DIR                 PIN_DIR_INPUT
#define PORTC_PIN3_DIR                 PIN_DIR_INPUT
#define PORTC_PIN4_DIR                 PIN_DIR_INPUT
#define PORTC_PIN5_DIR                 PIN_DIR_INPUT
#define PORTC_PIN6_DIR                 PIN_DIR_INPUT
#define PORTC_PIN7_DIR                 PIN_DIR_INPUT


#define PORTD_PIN0_DIR                 PIN_DIR_INPUT
#define PORTD_PIN1_DIR                 PIN_DIR_INPUT
#define PORTD_PIN2_DIR                 PIN_DIR_INPUT
#define PORTD_PIN3_DIR                 PIN_DIR_INPUT
#define PORTD_PIN4_DIR                 PIN_DIR_INPUT
#define PORTD_PIN5_DIR                 PIN_DIR_INPUT
#define PORTD_PIN6_DIR                 PIN_DIR_INPUT
#define PORTD_PIN7_DIR                 PIN_DIR_INPUT


/*---------------------------------------------------*/

/*
For Output :
Choose PIN_INITIAL_VLAUE_LOW  for : LOW
Choose PIN_INITIAL_VLAUE_HIGH for : HIGH

For Input : 
Choose PIN_INITIAL_VLAUE_LOW  for : Normal_Input
Choose PIN_INITIAL_VLAUE_HIGH for : Pull_up
*/

#define PORTA_PIN0_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN1_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN2_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN3_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN4_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN5_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN6_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTA_PIN7_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW


#define PORTB_PIN0_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN1_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN2_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN3_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN4_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN5_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN6_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTB_PIN7_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW


#define PORTC_PIN0_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN1_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN2_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN3_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN4_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN5_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN6_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTC_PIN7_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW


#define PORTD_PIN0_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN1_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN2_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN3_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN4_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN5_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN6_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW
#define PORTD_PIN7_INITIAL_VALUE       PIN_INITIAL_VLAUE_LOW


#endif