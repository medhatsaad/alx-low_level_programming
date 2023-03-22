#include "main.h"

/**
 * _islower - check for lowercase
 * @c - is a character
 * Return: 1 is ok otherwise 0
 */
int _islower(int c)
{
	if ( c >= 97 && c <= 122 )
		return (1);
	else
		{
		return (0);
		}	
}
