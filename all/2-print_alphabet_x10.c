#include "main.h"

/**
 * print_alphabet_x10  - print alpha x 10
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
}	}
