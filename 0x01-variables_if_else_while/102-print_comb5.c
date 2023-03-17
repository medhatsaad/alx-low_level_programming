#include <stdio.h>

/**
 * main - combination of two numbers
 * Return: 0 is ok
 */
int main(void)
{
	int n;
	int m;

	void print2num(int r)
	{
		putchar(' ');
		if ( r <=9 )
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

	
	for (n = 0; n <= 99; n++)
		{
		for (m = n + 1; m <= 99; m++)
		{
			print2num(n);
			print2num(m);
			if (!(n == 98 && m == 99))
			{
				putchar(',');
					}
			}
		}
	putchar('\n');
	return (0);
}
