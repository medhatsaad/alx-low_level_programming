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
	int k = 0;
	char *s = haystack;

	while (needle[k] != '\0')
	{
		k++;
	}

	if (k == 0)
		return (haystack);

	for (j = 0; haystack[j] != '\0'; j++)
	{
		i = 0;
		while (s[i] != needle[0])
		{
			i++;
		}
		for (j = 1; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);

		s++;
	}
	return ('\0');
}
