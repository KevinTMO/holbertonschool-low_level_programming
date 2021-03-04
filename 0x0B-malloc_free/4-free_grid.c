#include "holberton.h"
#include "stdlib.h"

/**
 *free_grid - will free the bytes of an array
 *@grid: is the 2 dimensional array to free
 *@height: is the total of arrays
 *Return: will return the pointer
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
