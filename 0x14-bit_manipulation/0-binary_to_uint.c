# include "main.h"
/**
 * binary_to_uint - change binary to unsigned integer
 * @b: 0's and 1's
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 1;
	unsigned int z = 0;

	if (b == ((void *)0))
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}
	i--;
	while (i >= 0)
	{
		z += (b[i] - '0') * j;
		i--;
		j *= 2;
	}
	return (z);
}
