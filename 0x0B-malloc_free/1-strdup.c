# include "main.h"
# include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	int i;
	int size = 1;
	char *a;

	if (*str == '\n')
		return ('\0');
	for (i = 0; str[i] != '\0'; i++)
		size++;
	a = malloc(size * sizeof(char));
	if (size == 1)
		return ('\0');
	if (a)
	{
		for (i = 0; i < size; i++)
			a[i] = str[i];
		return (a);
	}
	else
		return ('\0');
}

