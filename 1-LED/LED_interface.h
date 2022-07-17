/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HAL                       ************/
/************ Version : 1.00                      ************/
/************ SWC     : LED                       ************/
/*************************************************************/
/*************************************************************/


/*
		   -----
1	PB0	 -|		|-	PA0	 40
2	PB1	 -|		|-	PA1	 39
3	PB2	 -|		|-	PA2	 38
4	PB3	 -|		|-	PA3	 37
5   PB4	 -|		|-	PA4	 36
6 	PB5  -|		|-	PA5	 35
7   PB6  -|		|-	PA6	 34
8 	PB7  -|		|-	PA7	 33
9		 -|		|-		 32
10		 -|		|-		 31
11		 -|		|-	     30
12		 -|		|-	PC7	 29
13		 -|		|-	PC6	 28
14	PD0	 -|		|-	PC5	 27
15	PD1	 -|		|-	PC4	 26
16	PD2	 -|		|-	PC3	 25
17	PD3	 -|		|-	PC2	 24
18	PD4	 -|		|-	PC1	 23
19	PD5	 -|		|-	PC0	 22
20	PD6	 -|		|-  PD7  21
		   -----	       
*/



/*************************************************************************************************************************/
/** Define The port used in the hardware connection  -->  PORTA or PORTB or PORTC or PORTD                              **/
/**																														**/
/**	Define The pin used in the hardware connection   -->  PIN0 or PIN1 or PIN2 or PIN3 or PIN4 or PIN5 or PIN6 or PIN7  **/
/**																														**/
/**	Define The connection type                       -->  Source connection or Sink connection                          **/
/**                                                                                                                     **/
/**	1) Source Connection --> Connect the +ve of the led with the Microcontroller Pin and the -ve of the led to ground   **/
/**		to make the led on --> put 5 volt on Microcontroller Pin                                                        **/
/**		to make the led on --> put 0 volt on Microcontroller Pin                                                        **/
/**																														**/
/**	2) Sink Connection   --> Connect the -ve of the led with the Microcontroller Pin and the +ve of the led to 5 volt   **/
/**		to make the led on --> put 0 volt on Microcontroller Pin                                                        **/
/**		to make the led on --> put 5 volt on Microcontroller Pin                                                        **/
/*************************************************************************************************************************/


#ifndef _LED_INTERFACE_H_
#define _LED_INTERFACE_H_

typedef struct _LED_ LED;

struct _LED_
{
	u8 PORT:2;
	u8 PIN:3;
	u8 Connection_Type:1;
};


#define LED_OFF                 0
#define LED_ON                  1

#define LED_Source_Connection   0
#define LED_Sink_Connection     1

void LED_State(LED Led, u8 State);

#endif