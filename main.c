#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <inttypes.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include <stdlib.h>

//konieczne dla dzia�ania niekt�rych urz�dze�
static void avr_init(void);

int main(void) 
{ 
	//avr_init();
	//acd_init();
  
	//A - wej�cie
	//DDRA=0x00;

	//B - wyj�cie - opcjonalne z diod�
	//DDRB=0xFF;
	
	//C - wyj�cie - tranzystory
	//DDRC=0xFF;
	//PORTC=0x00;
	
	//D - wej�cie - nieu�ywany
	//DDRD=0x00;
  
	return 0;
} 

//kod przerwania odebrania ramki po RS
SIGNAL(SIG_UART_RECV)
{
	cli(); //wy��czanie przerwa�

	//readbyte(rs_buffer);
	//sendbyte(*rs_buffer);
	
	sei(); //w��czenie przerwa�
}

//#include "avr_init.c"
