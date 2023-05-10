# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * flip_bits - determine number of bits changed
 * @n: integer 1
 * @m: integer 2
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j;
	int *a;
	int *b;

	i = number_of_bits(n);
	j = number_of_bits(m);
	printf("number1: %ld len:%d, number2: %ld len %d\n", n, i, m, j);
	a = malloc(sizeof(int) * i);
	b = malloc(sizeof(int) * j);

	if (a && b)
	{
		fill_array(n, 1, a);
		fill_array(m, 1, b);
		return (_xor(a, b, i, j));	
	}
	else
		return (0);
}

int number_of_bits(unsigned long int n)
{
	unsigned long int x = 2;
	int i = 1 ;

	while (n > x)
	{
		x *= 2;
		i++;
	}
	return (i);
}

unsigned int fill_array(unsigned long int n, unsigned long int i, int *p)
{
	unsigned long int m = n;

	if (m >= i * 2)
		m = fill_array(m, i * 2, p++);
	if (m  >= i && m < i * 2)
	{
		p[0] = 1;
		return (m - i);
	}
	else
		p[0] = 0;
	return (m);
}

int _xor(int *a, int *b, int i, int j)
{
	int r, flip = 0;
	if(i >= j)
	{
		for (r = 0; r < j; r++)
		{
			if ((a[r] ^ b[r]) == 1)
				flip++;
		}
		for (r = j; r < i - j; r++)
		{
			if ((a[r] ^ 0) == 1)
				flip++;
		}
	}
	else
	{
		for (r = 0; r < i; r++)
		{
			if ((a[r] ^ b[r]) == 1)
				flip++;
		}
		for (r = i; r < j - i; r++)
		{
			if ((a[r] ^ 0) == 1)
				flip++;
		}
	}
	return (flip);
}
