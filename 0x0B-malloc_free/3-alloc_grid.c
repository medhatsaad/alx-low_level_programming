# include "main.h"
# include <stdlib.h>
/**
 * alloc_grid - allocate space for 2 dimension array
 * @width: int
 * @height: int
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return ('\0');
	a = (int **) malloc(height * sizeof(int *));
	if (a)
	{
		for (i = 0; i < height; i++)
		{
			*(a + i) = (int *) malloc(width * sizeof(int));
			if (*(a + i))
				for (j = 0; j < width; j++)
					a[i][j] = 0;
			else
			{
				free(a);
				return ('\0');
			}
		}
		return (a);
	}
	else
		return ('\0');
}
