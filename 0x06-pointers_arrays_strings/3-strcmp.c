# include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 equal -1 s2 greater +1 s1 greater
 */
int _strcmp(char *s1, char *s2)
{
	char *n = s1;
	char *p = s2;

	while (*n != '\0')
	{
		if (*p == '\0')
			return (1);
		else if (*n > *p)
			return (1);
		else if (*n < *p)
			return (-1);
		n++;
		p++;
	}

	if (*p != '\0')
		return (-1);
	else
		return (0);
}
