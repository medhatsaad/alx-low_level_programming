# include "main.h"
/**
 * swap_int - interchange values between 2 variables
 * @a: int pointer
 * @b: int pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
