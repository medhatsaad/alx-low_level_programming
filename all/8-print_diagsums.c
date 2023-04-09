# include "main.h"
# include <stdio.h>
/**
 * print_diagsums - print sum of the 2 diagnoals
 *
 * @a: array
 * @size: siza of array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + j + (i * size));
			if ((i + j) == size - 1)
				sum2 += *(a + j + (i * size));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
