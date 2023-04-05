# include "main.h"
/**
 * factorial - calculate factorial of number
 *
 * @n: int number > 0
 *
 * Return: result
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
