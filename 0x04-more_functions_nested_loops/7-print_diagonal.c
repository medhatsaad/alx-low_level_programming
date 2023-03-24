# include "main.h"
/**
 * print_diagonal - print /
 * @n: int
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i + 1; j++)
				_putchar(' ');
		}
	}
	_putchar('\n');
}
