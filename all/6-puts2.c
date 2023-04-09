# include "main.h"
/**
 * puts2 - return even char
 * @str: pointer
 **/
void puts2(char *str)
{
	char *c = str;
	int size = 0;
	int i;

	while (*c != '\0')
	{
		size++;
		c++;
	}

	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

}
