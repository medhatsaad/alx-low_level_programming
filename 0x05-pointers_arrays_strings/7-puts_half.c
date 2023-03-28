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

	if (size % 2 == 0)
	{
		for (i = (size / 2) + 1; i < size; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (size / 2); i < size; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
