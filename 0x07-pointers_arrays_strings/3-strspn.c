# include "main.h"
# include <stdio.h>
/**
* _strspn - return size of initial strings consists only of accept
* @s: source
* @accept: substring
* Return: number of bytes - int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int i, j;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = 1;
				break;
			}
		}

		if (f == 1)
		{
			size++;
			f = 0;
		}
		else
			return (size);
	}
	return (size);
}
