# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
/**
 * main - mai
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int  main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
