# include <stdio.h>
# include <stdlib.h>
/**
 * main - print code of main
 * @argc: number of arg
 * @argv: args
 *
 * Return: exit code
 *
 */
int main(int argc, char *argv[])
{
	int i, b, size;
	int (*p)(int, char **) = main;
	char *c;
	char m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)p;
	size = sizeof(p);
	for (i = 0; i < b - 1; i++)
	{
		m = c[i];
		printf("%02hhx ", m);
	}
	printf("%02hhx\n", c[b - 1]);
	return (0);
}
