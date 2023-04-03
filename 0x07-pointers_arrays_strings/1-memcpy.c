# include "main.h"
/**
 * _memcpy - copy n bytes of  memory value from source to destination
 *
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes
 *
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
