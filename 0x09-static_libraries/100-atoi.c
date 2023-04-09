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
	int value = 0;
	int i;
	int j = 0;
	int k = 10;

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
				value = *letter - 48;
				num = num + value;
				j++;
			}
			else
			{
				value = ((*letter - 48) * k);
				num = num + value;
				k = k * 10;
			}
		}
		else
		{
			if (*letter == 45)
				num = -num;
		}
		letter--;
	}

	return (num);
}
