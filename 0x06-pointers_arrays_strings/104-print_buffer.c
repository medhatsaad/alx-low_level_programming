# include "main.h"
# include <stdio.h>
# include <ctype.h>
/**
 * print_buffer - print
 * @b: char
 * @size: int
 */
void print_buffer(char *b, int size)
{
	int i, j, n, m;
	int k = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", k);
			for (n = 0; n < 5; n++)
			{
				for (m = 0; m < 2; m++)
				{
					if (k < size)
						printf("%02x", b[k]);
					else
						printf("  ");
					k++;
				}
				printf(" ");
			}
			k -= 10;
			for (j = 0; j < 10; j++)
			{
				if (k < size)
				{
					if (isprint(b[k]))
						printf("%c", b[k]);
					else
						printf(".");
				}
				else
					printf(" ");
				k++;
			}
			printf("\n");
		}
	}
	else
		printf("\n");
}
