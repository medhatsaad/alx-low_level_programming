# include <stdio.h>

/**
 * main - print first 50 fib no start with 1,3
 * Return: 0 is ok
 */
int main(void)
{
	int n;
	unsigned long f1;
	unsigned long f2;
	unsigned long f3;

	f1 = 1;
	f2 = 2;
	n = 2;
	printf("1, 2, ");
	while (n <= 98)
	{
		f3 = f1 + f2;
		printf("%lu", f3);
		n++;
		if (n < 98)
			printf(", ");
		else
			printf("\n");
		f1 = f2;
		f2 = f3;
	}
	return (0);
}
