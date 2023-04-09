# include "main.h"
/**
 * _strchr - find first location of char c in string s
 *
 * @s: string to serach in
 * @c: char to find
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	if (c == '\0')
		return (s + i);
	return ('\0');
}
