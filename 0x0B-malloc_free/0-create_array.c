# include "main.h"
# include <stdlib.h>
/**
 * create_array - create an array with given size and fill it with char sent
 *
 * @size: array size
 * @c : char to fill array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ('\0');

	a = malloc(size * sizeof(char));
	if (a)
	{
		for (i = 0; i < size; i++)
			a[i] = c;
	return (a);
	}
	else
		return ('\0');
}
