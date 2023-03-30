# include "main.h"
/**
 * _strncpy - copy source string in destination string
 *
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcsize = 0;
	char *start = dest;
	char *pen = src;
	char *c = src;

	while (*c != '\0')
	{
		srcsize++;
		c++;
	}

	for (i = 0; i < n; i++)
	{
		if (i < srcsize)
		{
			*start = *pen;
			pen++;
		}
		else
			*start = '0';
		start++;
	}
	return (dest);
}
