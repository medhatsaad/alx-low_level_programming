# include "main.h"
/**
 * print_binary - print binary form of integer
 * @n: integer number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_print_binary(n, 1);
}


/**
 * _print_binary - recursive function to print one bit 0 or 1
 * @n: integer number which be represented in binary
 * @i: place of bit
 *
 * Return: reminder
 */
unsigned int _print_binary(unsigned long int n, unsigned int i)
{
	unsigned long int m = n;

	if (m >= i * 2)
		m = _print_binary(m, i * 2);
	if (m  >= i && m < i * 2)
	{
		_putchar('1');
		return (m - i);
	}
	else
		_putchar('0');
	return (m);
}
