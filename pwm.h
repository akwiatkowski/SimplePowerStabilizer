/* 
 * File:   tcp_server.h
 * Author: olek
 *
 * Created on 1 luty 2011, 19:20
 */

#ifndef PWM_H
#define	PWM_H

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <inttypes.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include <stdlib.h>

void pwm_init();
void _pwm_tmp();


#endif	/* PWM */