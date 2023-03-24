# include "main.h"
/**
 * _isdigit - check number
 * @c: int
 * Return: 1 is number
 */
int _isdigit(int c)
{
	if (c >=48 && c <= 57)
		return (1);
	else
		return (0);
}
