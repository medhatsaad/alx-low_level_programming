# include <stdio.h>
/**
 * main - mai
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int  main(int argc, char **argv)
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
