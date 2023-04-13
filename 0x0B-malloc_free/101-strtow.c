# include "main.h"
# include <stdlib.h>
/**
 * strtow - split string
 *
 * @str: inpute string
 *
 * Return: array of strings
 *
 */
char **strtow(char *str)
{
	int i;
	int row = 0;
	int col = 0;
	int k = 0;
	char **a;

	if (str == NULL || str== "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			row++;
	}

	a = (char **) malloc((row + 1)*sizeof(char *));
	if (a)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
				col++;
			if (str[i] == ' ')
				a[k] = (char *) malloc((col + 1) * sizeof(char));
				if (a[k])
				{
					k++;
					col = 0;
				}
				else
					return (NULL);
		}


			
	}
	else
		return (NULL);

}
