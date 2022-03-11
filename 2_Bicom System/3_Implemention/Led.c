/*
 * Led.c
 *
 *  Created on: Mar 11, 2022
 *      Author: HP
 */

#include <stdint.h>                    //Anant,Harshita,Darshan
#include "Led.h"

const int en1 = 1;
const int en2 = 2;
const int en3 = 3;
const int en4 = 4;


void delay(uint32_t count)
{
  for(uint32_t i = 0 ; i < count ; i++);
}

void led_init_all(void)
{

	uint32_t *pRccAhb1enr = (uint32_t*)0x40023830;
	uint32_t *pGpiodModeReg = (uint32_t*)0x40020C00;


	*pRccAhb1enr |= ( 1 << 3);

	*pGpiodModeReg |= ( 1 << (2 * LED_GREEN));
	*pGpiodModeReg |= ( 1 << (2 * LED_ORANGE));
	*pGpiodModeReg |= ( 1 << (2 * LED_RED));
	*pGpiodModeReg |= ( 1 << (2 * LED_BLUE));

    led_off(LED_GREEN);
    led_off(LED_ORANGE);
    led_off(LED_RED);
    led_off(LED_BLUE);



}

void led_on(uint8_t led_no)
{
  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
  *pGpiodDataReg |= ( 1 << led_no);

}

void led_off(uint8_t led_no)
{
	  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
	  *pGpiodDataReg &= ~( 1 << led_no);

}

void bluebutton_init(void)
{

	uint32_t *pRccAhb1enr1 = (uint32_t *)0x40023830;
		*pRccAhb1enr1 |= (1 << 0);

		uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C;
		*pGpioPuPdReg |= (1 << 1);
}

int  bluebutton_count(void)
{

	bluebutton_init();
	int c = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010;
	int t = 10000000;
	while (t--)
	{
		if ((*pGpiodDataReg1))
		{
			delay(150);
			c++;

			if (c > 4)
				c = 0;
		}
	}
	return c;
}

int encryp(int en)
{
	if (en == en1)
		return 5;
	else if (en == en2)
		return 6;
	else if (en == en3)
		return 7;
	else if (en == en4)
		return 8;
	return 0;
}
