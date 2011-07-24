#include "avr_init.h"
#include "pwm.h"

/*
 * static void avr_init(void) - Atmega16/32
 */
void avr_init(void)
{
  cli();
  pwm_init();

  /*
	//A - wej�cie
	DDRA=0x00;

	//B - wyj�cie - opcjonalne z diod�
	DDRB=0xFF;
	info_led_on(); //na starcie w��czona
	
	//C - wyj�cie - tranzystory
	DDRC=0xFF;
	PORTC=0x00;
	info_led_on(); //na starcie w��czona
	
	//D - wej�cie - nieu�ywany
	DDRD=0x00;

  */

  sei();
    
  return;
}