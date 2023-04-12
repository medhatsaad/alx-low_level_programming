# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * str_concat - concat 2 strings
 * @s1: string
 * @s2: string
 *
 * Return: concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int size1 = 0;
	int size2 = 0;
	int size;
	char *a;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	size = size1 + size2 + 1;
	a = malloc(size * sizeof(char));
	if (a)
	{
		if ((s1 == NULL) && (s2 == NULL))
			a[0] = '\0';
			return (a);
		if (s1 != NULL)
			for (i = 0; i < size1; i++)
				a[i] = s1[i];
		if (s2 != NULL)
			for (i = 0; i <= size2; i++)
				a[size1 + i] = s2[i];
		return (a);
	}
	else
		return ('\0');
}

