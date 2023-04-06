# include "main.h"
/**
 * is_palindrome - check if string is symmetric
 *
 * @s: input string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (strleng(s) == 0)
		return (1);
	else if (strleng(s) == 1)
		return (0);
	else
		return (check(s, strleng(s)));
}

/**
 * strleng - return string length
 * @s: input string
 * Return: length - int
 */
int strleng(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + strleng(s + 1));
}

/**
 * check - check start and end of string
 * @s: input string
 * @n: string length
 * Return: 0 or 1
 */
int check(char *s, int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (s[0] != s[n - 1])
		return (0);
	else
		return (check(s + 1, n - 2));
}
