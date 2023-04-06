# include "main.h"
/**
 * is_prime_number - check if number is prime
 * @n: number input
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = -1 * n;
	if (n == 0 || n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (check_prime(n, 3));
}

/**
 * check_prime - divide by 2 to n-1
 * @n: int number
 * @m: dividor
 * Return: 0 or 1
 */
int check_prime(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (check_prime(n, m + 2));
}
