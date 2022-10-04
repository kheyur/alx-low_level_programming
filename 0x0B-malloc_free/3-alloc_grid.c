#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array, NULL if width/height = 0 or failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
       	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	grid = malloc(sizeof(int) * (height + width));
	if (grid == NULL || grid <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i, j] = 0;
		}
	}
	return (grid);
}
