# include "main.h"
/**
 * _strncat - concat source string to destination string
 *
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n; i++)
	{
		*start = *end;
		start++;
		end++;
	}

	return (dest);
}
