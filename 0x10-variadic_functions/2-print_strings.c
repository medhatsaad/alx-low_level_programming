# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"
# include <stdlib.h>
/**
 * print_strings - print list of number with separator
 * @separator: sep between numbers
 * @n: number of numbers
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *c;

	va_start(arg, n);
	if (n == 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			c = va_arg(arg, char*);
			if (c != NULL)
				printf("%s", c);
			else
				printf("(nil)");
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(arg);
}
