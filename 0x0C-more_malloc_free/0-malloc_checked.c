# include "main.h"
# include <stdlib.h>
/**
 * malloc_checked - check memory allocation statuse
 * @b: size
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a)
		return (a);
	exit(98);
}
