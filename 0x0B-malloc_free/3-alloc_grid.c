#include "holberton.h"
#include "stdlib.h"

/**
 *alloc_grid - create a 2 dimensional array step by step
 *@height: will tell how many arrays will be
 *@width: will tell how many elements each array will have
 *Return: will return the pointer with the arrays
 */

int **alloc_grid(int width, int height)
{
	int index, sindex;
	int **ngrid;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	ngrid = malloc(sizeof(int *) * height);

	if (ngrid == 0)
	{
		free(ngrid);
		return (0);
	}

	for (index = 0; index < height; index++)
	{
		ngrid[index] = malloc(sizeof(int) * width);

		if (ngrid[index] == NULL)
		{
			for (sindex = index; sindex >= 0; sindex--)
			{
				free(ngrid[sindex]);
			}
			free(ngrid);
			return (NULL);
		}
	}

	for (index = 0; index < height; index++)
	{
		for (sindex = 0; sindex < width; sindex++)
		{
			ngrid[index][sindex] = 0;
		}
	}
	return (ngrid);
	free(ngrid);
}
