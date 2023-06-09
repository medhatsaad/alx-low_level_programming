# ifndef _FILE_NAME_H_
# define _FILE_NAME_H_
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned int _print_binary(unsigned long int n, unsigned long int i);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int *_int_to_bin(unsigned long int number, unsigned int size);
unsigned long int _bin_to_int(int *p, unsigned int size);
int number_of_bits(unsigned long int n);
unsigned int fill_array(unsigned long int n, unsigned long int i, int *p);
int _xor(int *a, int *b, int i, int j);
# endif
