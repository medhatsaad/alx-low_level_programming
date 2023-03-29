# include "main.h"
/**
 * _strcat - concat source string to destination string
 *
 * @dest: string
 * @src: string
 *
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	char *start = dest;
	char *end = src;
	int size1 = 0;
	int size2 = 0;
	int i;

	while (*end != '\0')
	{
		size1++;
		end++;
	}

	while (*start != '\0')
	{
		size2++;
		start++;
	}

	end = src;
	for (i = 0; i <= size1; i++)
	{
		*start = *end;
		start++;
		end++;
	}

	return (dest);
}
