#include "main.h"

/**
 * print_sign - check number sign
 * @n: int
 * Return: 1 +ve -1 -ve 0 zero
 */
int print_sign(int n)
{
	if (n > 0)
		{ 
			_putchar('+');
			return (1);
		}
	else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
	else
		{
			_putchar('0');
			return (0);
		}
}
