/* 
 * File:   tcp_server.h
 * Author: olek
 *
 * Created on 1 luty 2011, 19:20
 */

#ifndef AVR_INIT_H
#define	AVR_INIT_H

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <inttypes.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include <stdlib.h>


/*
 * neede by some devices
 * static void avr_init(void) - Atmega16/32
 */
void avr_init(void);


#endif	/* AVR_INIT_H */