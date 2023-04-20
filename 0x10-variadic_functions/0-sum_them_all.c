# include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
