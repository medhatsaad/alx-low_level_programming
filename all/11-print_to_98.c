#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers n to 98
 * @n: int
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n == 98)
		{
			printf("98\n");
			break;
		}
		else if (n < 0)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
}
