# include <stdio.h>
# include "main.h"
/**
 * _atoi - change ascii to integer
 * @s: input string
 *
 * Return: int number
 *
 **/
int _atoi(char *s)
{
	char *letter = s;	
	int size = 0;
	int num = 0;
	int i;
	int j = 0;
	int k = 1;

	while (*letter != '\0')
	{
		size++;
		letter++;
	}
	
	letter--;

	for (i = 0; i < size; i++)
	{
		if (*letter >= 48 && *letter <= 57)
		{
			if (j == 0)
			{
				num = *letter - 48;
				j++;
			}
			else
			{
				num = num + ((*letter - 48) * 10 * k);
				k++;
			}
		}
		letter--;
	}

	return (num);
}
