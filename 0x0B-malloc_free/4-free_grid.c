#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid created by previous function
 * @grid: 2d array
 * @height: height of the array
 * Return: none
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; heihgt >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
