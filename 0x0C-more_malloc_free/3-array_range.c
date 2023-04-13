# include "main.h"
# include <stdlib.h>
/**
 * array_range - 
 * @min:
 ^ @max:
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int k = 0;

	if (min > max)
		return (NULL);
	a = (int *)malloc((max - min + 1) * sizeof(int));
	if (a)
	{
		for (i = min; i <= max; i++)
		{
			a[k] = i;
			k++;
		}
		return (a);
	}
	else
		return (NULL);
}
