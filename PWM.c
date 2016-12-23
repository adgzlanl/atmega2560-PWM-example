#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	uint8_t cnt;

	TCCR0A |= (1<<WGM01)|(1<<COM0A1)|(1<<WGM00);
	TCCR0B |= (1 << CS00) ;
	DDRB |= (1<<PB7);

	while(1)
	{
		
		for (cnt = 0; cnt < 255; ++cnt)
		{
			
			OCR0A = cnt;

			
			_delay_ms(10);
		}

		
		for (cnt = 255; cnt > 0; --cnt)
		{
			
			OCR0A = cnt;

			
			_delay_ms(10);
		}

		
	}
}