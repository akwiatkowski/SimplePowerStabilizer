#include "avr_init.c"
#include "pwm.c"

int main(void) 
{ 
	avr_init();
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

/*
 * TODO: pwm version has other interrupt
 * SIGNAL(SIG_UART_RECV) - Atmega16/32
 * 
 * interrupt

SIGNAL(SIG_UART_RECV)
{
	cli(); //wy��czanie przerwa�

	//readbyte(rs_buffer);
	//sendbyte(*rs_buffer);
	
	sei(); //w��czenie przerwa�
}
*/
