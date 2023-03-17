#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - check last digit of random number
 * Return: 0 is ok
 * /
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = n % 10;
	printf("%i \n",m);
	return (0);
}
