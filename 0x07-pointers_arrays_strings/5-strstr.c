# include "main.h"
/**
 * _strstr - find str in str
 *
 * @haystack: string to search in
 * @needle: string to find
 *
 * Return: pointer to first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int r = 0;
	int n = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				if (j == 0)
				{
					n  = i;
					r = 1;
				}
			}
			else
			{
				r = 0;
				break;
			}
		}
		if (j == 0)
			return (haystack);
		else if (r == 1)
			return (haystack + n);
	}
	return ('\0');
}
