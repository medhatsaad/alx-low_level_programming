# include "main.h"
/**
 * _memset - fill n bytes of memory @ address s with value b
 *
 * @s: memory address - pointer
 * @n: no of bytes - int
 * @b: byte value - char
 *
 * Return: memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
