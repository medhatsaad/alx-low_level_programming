# include "function_pointers.h"
# include <stdlib.h>
/**
 * print_name - function to print a name
 * @name: string to be print
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != Null)
		f(name);
}
