# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * _calloc - allocat memory for array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = calloc(nmemb, size);
	if (a)
		return (a);
	return (NULL);
}
