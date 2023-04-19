# ifndef _FILE_NAME_H_
# define _FILE_NAME_H_
# include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
# endif
