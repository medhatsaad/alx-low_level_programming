# include "main.h"
/**
 * print_square - print #
 * @size: int
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
