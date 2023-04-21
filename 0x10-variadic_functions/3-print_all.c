# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"
# include <stdlib.h>
/**
 * print_all - print list of strings with separator
 * @separator: sep between numbers
 * @format: number of numbers
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list arg;
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);
	while (format[j] != '\0')
	{
		while (i < 4)
		{
			if (format[j] == ops[i].op[0])
			{
				ops[i].f(arg);
				k = 1;
			}
			i++;
		}
		i = 0;
		j++;
		if (format[j] != '\0' && k == 1)
		{
			printf(", ");
			k = 0;
		}
	}
	printf("\n");
	va_end(arg);
}

/**
 * print_char - print
 * @alist: arg list
 */
void print_char(va_list alist)
{
	printf("%c", va_arg(alist, int));
}

/**
 * print_int - print
 * @alist: arg list
 */
void print_int(va_list alist)
{
	printf("%d", va_arg(alist, int));
}

/**
 * print_float - print
 * @alist: arg list
 */
void print_float(va_list alist)
{
	printf("%f", va_arg(alist, double));
}

/**
 * print_string - print
 * @alist: arg list
 */
void print_string(va_list alist)
{
	printf("%s", va_arg(alist, char*));
}
