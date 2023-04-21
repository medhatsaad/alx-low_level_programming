# ifndef _FILE_NAME_H_
# define _FILE_NAME_H_
# include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list alist);
void print_float(va_list list);
void print_char(va_list alist);
void print_string(va_list alist);
/**
 * struct op - struct op
 *
 * @op: character indicating type
 * @f: function
 *
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;
# endif
