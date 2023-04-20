# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"
# include <stdlib.h>
/**
 * print_numbers - print list of number with separator
 * @separator: sep between numbers
 * @n: number of numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (separator != NULL || n > 0)
	{
		va_start(arg, n);
		for (i = 1; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		printf("%d\n", va_arg(arg, int));
		va_end(arg);
	}

}
