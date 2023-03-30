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
	int srcsize = strsize(src);
	char *start = dest;
	char *pen = src;
		
	for (i = 0; i < n; i++)
	{
		if ( i < srcsize)
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

/**
 * strsize - return string size
 * @n: char pointer
 * Return: int
 */
int strsize(char *n)
{
	int size;
	
	while (*n != '\0')
	{
		size++;
		n++;
	}

	return (size);
}
