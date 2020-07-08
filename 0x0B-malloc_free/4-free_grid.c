#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free up grid
 *@grid:pointer to pointer
 *@height:height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + c));
	}
	free(grid);

}
