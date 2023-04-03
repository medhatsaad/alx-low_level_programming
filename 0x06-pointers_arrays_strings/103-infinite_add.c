# include "main.h"
# include <stdio.h>
/**
 * infinite_add - add 2 numbers
 * @n1: char input 1
 * @n2: char input 2
 * @r: char output
 * @size_r: int
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1 = 0;
	int size2 = 0;
	int sum = 0;
	int reminder = 0;
	int i;
	int size3 = size_r;
	char *n;
	char *m;
	int s1, s2;

	for (i = 0; n1[i] != '\0'; i++)
		size1++;

	for (i = 0; n2[i] != '\0'; i++)
		size2++;
	
	if (size1 >= size2)
	{
		n = n1;
		m = n2;
		s1 = size1;
		s2 = size2;
	}
	else 
	{
		n = n2;
		m = n1;
		s1 = size2;
		s2 = size1;
	}


	
	for (i = 0; i < s2; i++)
	{
		sum = n[s1 - i] + m[s2 - i] + reminder;
		printf("%d %d \n", n1[i] - 48, n2[i] - 48, n[i], m[i], sum);
		if ((size3 - i) == 0)
			return (0);
		else
		{	
			if (sum / 10 > 0)
			{
				r[size3 - i] = '0' + (sum % 10);
				reminder = sum / 10;
			}
			else
				r[size3 - i] = '0' + sum;
		}
	}
		
	for (; i < s1; i++)
	{	
		sum = n[s1 - i] + reminder;
		if ((size3 - i) == 0)
			return (0);
		else
		{	
			if (sum / 10 > 0)
			{
				r[size3 - i] = '0' + (sum % 10);
				reminder = sum / 10;
			}
			else
				r[size3 - i] ='0' +  sum;
		}
	}
	return (r);
}
