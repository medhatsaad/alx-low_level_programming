# include "main.h"
/**
 * print_number - print integers
 * @n: int
 */
void print_number(int n)
{
	int num = n;
	int dig;
	int digit;
	int i = 0;
	int j, m;
	int p = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			num = -n;
			dig = -n;
		}
		else
		{
			num = n;
			dig = n;
		}
		while (num != 0)
		{
			num = num / 10;
			i++;
		}

		for (j = 1; j < i; j++)
			p = p * 10;

		for (m = 0; m < i; m++)
		{
			digit = dig / p;
			_putchar('0' + digit);
			dig = dig - (digit * p);
			p = p / 10;
		}
	}
}
