#include <stdio.h>
/**
 * main - sum divisable by 3 or 5 under 1024
 * Return: 0 is ok
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);	
	return (0);

}
