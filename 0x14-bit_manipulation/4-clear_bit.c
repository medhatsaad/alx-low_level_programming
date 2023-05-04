# include "main.h"
# include <stdlib.h>
/**
 * clear_bit - change value of index bit
 * @n: pointer to number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 0;
	unsigned long int number = *n;
	int *p;

	while (number != 0)
	{
		number /= 2;
		size++;
	}
	number = *n;
	if (index > size)
		size = index + 1;
	p = _int_to_bin(number, size);
	if (p)
	{
		p[index] = 0;
		*n = _bin_to_int(p, size);
		free(p);
		return (1);
	}
	else
		return (-1);
}
/**
 * _int_to_bin - change integer to array of bits
 * @number: number
 * @size: array size
 * Return: array pointer
 */
int *_int_to_bin(unsigned long int number, unsigned int size)
{
	unsigned long int n = number;
	unsigned int i = 0, j = size;
	int *p;

	p = malloc(sizeof(int) * size);
	if (p)
	{
		while (j != 0)
		{
			p[i] = n % 2;
			n /= 2;
			i++;
			j--;
		}
		return (p);
	}
	return (NULL);
}
/**
 * _bin_to_int - change array back to integer
 * @p: array pointer
 * @size: array size
 * Return: integer
 */
unsigned long int _bin_to_int(int *p, unsigned int size)
{
	unsigned int i, j = 1;
	unsigned long int n = 0;

	for (i = 0; i < size; i++)
	{
		n += p[i] * j;
		j *= 2;
	}
	return (n);
}
