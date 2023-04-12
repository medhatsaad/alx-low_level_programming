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
	int size = 0;
	char *a;

	for (i = 0; str[i] != '\0'; i++)
		size++;
	a = malloc(size * sizeof(char));

	if (a)
	{
		for (i = 0; i <= size; i++)
			a[i] = str[i];
		return (a);
	}
	else
		return ('\0');
}

