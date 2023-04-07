# include <stdio.h>
# include <stdlib.h>
/**
 * main - mai
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int  main(int argc, char **argv)
{
	int a, b;

	if (argc >= 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
