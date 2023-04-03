# include "main.h"
/**
 * _strpbrk - find first occurence of any of bytes in string
 *
 * @s: string to search in
 * @accept: to search for
 *
 * Return: pointer to first occurence
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

	return ('\0');
}
