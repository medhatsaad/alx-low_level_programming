#include "main.h"

/**
 * _isalpha - check if it is aletter
 * @c: a letter
 * Return: 1 is ok
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
