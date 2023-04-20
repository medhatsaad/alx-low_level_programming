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
		for (i = 1; i < n; i++)
		{
			c = va_arg(arg, char*);
			if (c != NULL)
				printf("%s", c);
			else
				printf("nill");
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%s\n", va_arg(arg, char*));
	}
	va_end(arg);
}
