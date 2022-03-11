/*
 * Led.h
 *
 *  Created on: Mar 11, 2022
 *      Author: HP
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#define LED_GREEN  12
#define LED_ORANGE 13
#define LED_RED    14
#define LED_BLUE   15
#define BUTTON     0


void led_init_all(void);
void led_on(uint8_t led_no);
void led_off(uint8_t led_no);
void delay(uint32_t count);
void bluebutton_init(void);
int  bluebutton_count(void);
int encryp(int en);


#endif /* INC_LED_H_ */
