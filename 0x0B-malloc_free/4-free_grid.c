#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - check the code for Holberton School students.
 *@grid: the variable
 *@height: another variable
 *Return: dest
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
