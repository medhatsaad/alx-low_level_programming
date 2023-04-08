# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int  main(int argc, char **argv)
{
	int cents, i;
	int change = 0;
	int reminder = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
		printf("0\n");
	for (i = 0; coin[i] != '\0'; i++)
	{
		change += cents / coin[i];
		reminder = cents % coin[i];
		if (reminder)
			cents = reminder;
		else
			break;
	}
	printf("%d\n", change);
	return (0);
}
