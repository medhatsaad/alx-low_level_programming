# include "main.h"
# include <stdio.h>
/**
 * print_rev - reverse print
 * @s: string address
 *
 */
void print_rev(char *s)
{
	int size = 0;
	char *c = s;

	while (*c != '\0')
	{
		size++;
		c++;
	}

	for (; c >= s; c--)
	{
		_putchar(*c);
	}

	_putchar('\n');
}
