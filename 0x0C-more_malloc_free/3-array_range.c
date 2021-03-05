#include "holberton.h"
#include "stdlib.h"

/**
 *array_range - will print an array of integers in hex
 *@min: will be the min value (0)
 *@max: will be the max value (10)
 *Return: will return pointer and free the memory after
 */

int *array_range(int min, int max)
{
	int *array;
	int index, sumsize = 0;

	if (min > max)
	{
		return (0);
	}

	sumsize = max - min;

	array = malloc(sizeof(int) * sumsize + 1);

	if (array == 0)
	{
		return (0);
	}

	for (index = 0; min <= max; index++)
	{
		array[index] = min;
		min++;
	}
	return (array);
}
