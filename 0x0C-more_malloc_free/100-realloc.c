# include "main.h"
# include <stdlib.h>
/**
 * _realloc - change memory size allocated
 *
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *p;
	int i, j;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	a = (char *) malloc(new_size);
	p = (char *) ptr;
	if (a)
	{
		if (ptr != NULL)
		{
			if (new_size > old_size)
				j = old_size;
			else
				j = new_size;
			for (i = 0; i < j; i++)
				*(a + i) = *(p + i);
			free(ptr);
		}
		return (a);
	}
	else
		return (NULL);
}
