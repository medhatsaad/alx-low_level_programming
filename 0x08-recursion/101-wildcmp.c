# include "main.h"
# include <stdio.h>
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
	char *z;

	if (s2[0] == '\0')
		return (1);
	else if (s2[0] == '*')
		return (wildsearch(s1, s2 + 1));
	else if (s1[0] != s2[0] && s1[0] != '\0')
		return (wildsearch(s1 + 1, s2));
	else if (s1[0] == s2[0])
	{
		z = checklast(s1, s2, stringlen(s1));
		/* printf("%s %s\n", z, s2); */
		/*  return (wildcmp(checklast(s1, s2, stringlen(s1)), s2 + 1)); */
		return (wildcmp(z, s2 + 1));
	}
	else
		return (0);
}

/**
 * stringlen - length of string
 * @s: input
 * Return: length
 */
int stringlen(char *s)
{
	if (s[0] != '\0')
		return (1 + stringlen(s + 1));
	else
		return (0);
}

/**
 * checklast - get last occurence
 * @s1: string to serach in
 * @s2: pattern to find
 * @l: string length
 * Return: last occurece position
 */
char *checklast(char *s1, char *s2, int l)
{
	if (s1[l - 1] == s2[0])
		return (s1 + l);
	else
		return (checklast(s1, s2, l - 1));

}
