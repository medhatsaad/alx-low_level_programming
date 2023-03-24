# include "main.h"
/**
 * _isupper - check letter  uppeercase or lowercase
 * @c: int
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90 )
		return (1);
	else
		return (0);
}
