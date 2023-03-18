#include <stdio.h>


/**
 * print2num - print in 2 numbers format
 * R: integer to do
 */
void print2num(int r)
{
	if (r <= 9)
	{
		putchar('0');
		putchar(r + '0');
	}
	else 
	{
		putchar((r / 10) + '0');
		putchar((r % 10) + '0');
	}
}

/**
 * printsp - print space
 */
void printsp(void)
{
	putchar(' ');
}

/**
 * main - combination of two numbers
 * Return: 0 is ok
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 99; n++)
		{
		for (m = n + 1; m <= 99; m++)
		{
			print2num(n);
			printsp();
			print2num(m);
			if (!(n == 98 && m == 99))
			{
				putchar(',');
				printsp();
			}

		}

		}
	putchar('\n');
	return (0);
}
