# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * argstostr - concate args to string
 * @ac: arg numbers
 * @av: args array
 *
 * Return: string pointer
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, size;
	int k = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	a = malloc((size + ac - 1 ) * sizeof(char));
	if (a)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				a[k] = av[i][j];
				k++;
			}
			a[k] = '\n';
			k++;
		}
		a[k] = '\0';
		return (a);
	}
	else
		return (NULL);
}
