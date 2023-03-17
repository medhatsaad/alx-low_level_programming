#include <stdio.h>

/**
 * main - combination of two numbers
 * Return: 0 is ok
 */
int main(void)
{
	int n;
	int m;
	int k;

	for (n = 0; n < 10; n++)
		{
		for (m = n + 1; m < 10; m++)
			{
			for (k = m + 1; k < 10; k++)
				{
				putchar(n + '0');
				putchar(m + '0');
				putchar(k + '0');
				if (!(n == 7 && m == 8 && k == 9))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
