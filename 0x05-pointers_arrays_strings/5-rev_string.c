# include "main.h"
# include <stdio.h>
/**
 * rev_string - reverse print
 * @s: string address
 *
 */
void rev_string(char *s)
{
	int size = 0;
	char *c = s;
	int i;
	char temp;

	while (*c != '\0')
	{
		size++;
		c++;
	}

	for (i = 0; i <= size / 2; i++)
	{
		temp = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = temp;
	}

}
