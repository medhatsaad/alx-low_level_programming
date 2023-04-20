# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	f = get_op_func(c);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
