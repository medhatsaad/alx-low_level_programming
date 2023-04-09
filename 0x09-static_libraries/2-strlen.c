# include "main.h"
/**
 * _strlen - return string length
 * @s: string pointer
 * Return: int size of string
 */
int _strlen(char *s)
{
	int size = 0;
	char *c  = s;

	while (*c != '\0')
	{
		size++;
		c++;
	}
	return (size);
}
