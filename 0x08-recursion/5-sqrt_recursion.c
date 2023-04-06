# include "main.h"
/**
 * _sqrt_recursion - sqr root function
 *
 * @n: number to get sqr root for
 *
 * Return: approximate
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (nsqr(n, 1));
}


/**
 * nsqr - approximate result
 *
 * @n: number to get root
 * @m: approximate
 *
 * Return: square root
 */
int nsqr(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m > n)
		return (-1);
	else
		return (nsqr(n, m + 1));
}

