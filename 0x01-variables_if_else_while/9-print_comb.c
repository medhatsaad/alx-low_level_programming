#include <stdio.h>

/**
 * main - print alph
 * Return: 0 is ok
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}




