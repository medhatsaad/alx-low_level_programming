# include "main.h"
# include <stdio.h>

/**
 * _stropy - copy string
 *
 * @dest: dstination string
 * @src: source string
 *
 * Return: destination string
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *c = src;

	while (*c != '\0')
	{
		dest[i] = src[i];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);

}
