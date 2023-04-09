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
	int i, j;
	char *a;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		a = argv[i];

		for (j = 0; a[j] != '\0'; j++)
		{
			if (!isdigit(a[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(a);
	}
	printf("%d\n", sum);
	return (0);
}
