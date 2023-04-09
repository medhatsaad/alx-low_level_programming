# include <stdio.h>

/**
 * main - print first 50 fib no start with 1,3
 * Return: 0 is ok
 */
int main(void)
{
	long f1;
	long f2;
	long f3;
	long sum;

	f1 = 1;
	f2 = 2;
	sum = 2;
	while (1)
	{
		f3 = f1 + f2;
		if (f3 >= 4000000)
			break;
		if (f3 % 2 == 0)
			sum = sum + f3;
		f1 = f2;
		f2 = f3;
	}
	printf("%lu\n", sum);
	return (0);
}
