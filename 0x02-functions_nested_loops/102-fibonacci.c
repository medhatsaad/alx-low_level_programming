# include <stdio.h>

/**
 * main - print first 50 fib no start with 1,3
 * Return: 0 is ok
 */
int main(void)
{
	int n;
	int f1;
	int f2;
	int f3;

	f1 = 0;
	f2 = 1;
	n = 1;
	printf("1, ");
	while(n <= 50)
	{
		f3 = f1 + f2;
		if (f3 % 10 == 1 || f3 % 10 == 2)
		{
			printf("%d", f3);
			n++;
			if (n == 50)
				printf("\n");
			else
				printf(", ");
		}
		f1 = f2;
		f2 = f3;
	}
	return (0);
}
