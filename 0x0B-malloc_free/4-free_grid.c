# include "main.h"
# include <stdlib.h>
/**
 * free_grid - free created array
 *
 * @grid: array pointer
 * @height: no of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i = height;

	while (i >= 0)
	{
		free(*(grid + i));
		i--;
	}
	free(grid);
}
