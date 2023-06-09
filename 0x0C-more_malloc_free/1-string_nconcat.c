# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * string_nconcat - concate 2 strings
 *
 * @s1: s1
 * @s2: s2
 * @n: int
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, i;
	int j = 0;
	char *s;
	printf("in"); 
	if ((s1 == NULL) && (s2 == NULL))
	{
		printf("Hi");
		return (NULL);
	}
	if (s1 == NULL)
		a = 0;
	else
		a = getsize(s1);
	if (s2 == NULL)
		b = 0;
	else
		b = getsize(s2);
	if (n < b)
		c = n;
	else
		c = b;
	s = malloc(a + c + 1);
	if (s)
	{
		if (s1 != NULL)
			for (i = 0; s1[i] != '\0'; i++)
			{
				s[j] = s1[i];
				j++;
			}
		if (s2 != NULL)
			for (i = 0; i < c; i++)
			{
				s[j] = s2[i];
				j++;
			}
		s[j] = '\0';
		return (s);
	}
	else
		return (NULL);
}


/**
 * getsize - get string size
 * @s: string
 *
 * Return: size
 */
int getsize(char *s)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}
