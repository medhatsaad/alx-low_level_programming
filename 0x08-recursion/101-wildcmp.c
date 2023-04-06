# include "main.h"
/**
 * wildcmp - compare 2 strings including *
 * @s1: input string
 * @s2: input string
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else if (s2[0] == '*')
		return (wildsearch(s1, s2 + 1));
	else
		return (0);
}

/**
 * wildsearch - searc
 * @s1: s1
 * @s2: s2
 * Return: 1 or 0
 */
int wildsearch(char *s1, char *s2)
{
	if (s2[0] == '\0')
		return (1);
	else if (s2[0] == '*')
		return (wildsearch(s1, s2 + 1));
	else if (s1[0] != s2[0] && s1[0] != '\0')
		return (wildsearch(s1 + 1, s2));
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
