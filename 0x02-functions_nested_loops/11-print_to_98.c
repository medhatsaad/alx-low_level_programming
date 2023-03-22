#include "main.h"
/**
 * print_to_98 - print numbers n to 98
 * @n: int
 */
void myprint(int m)
{
	if ( m / 10 == 0)
	{	
		_putchar('0' + m % 10);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + m / 10);
		_putchar('0' + m % 10);
		_putchar(',');
		_putchar(' ');
	}
}

void print_to_98(int n)
{
	

	while (n < 99)
	{
		if ( n == 98)
		{
			_putchar('9');
			_putchar('8');
			_putchar('\n');
		}	
		else if ( n < 0)
		{
			_putchar('-');
			myprint(-n);
		}
		else
			myprint(n);
		n++;
	}
}
