# include "main.h"

/**
 * puts_half - print 2nd half
 * @str: pointer
 **/
void puts_half(char *str)
{
	char *c = str;
	int i;
	int size = 0;

	while (*c != '\0')
	{
		size++;
		c++;
	}

	for (i = ((size - 1) / 2) + 1; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
