#include "search_algos.h"

/**
 *
 *
 *
 */

int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (!array)
    {
	return (-1);
    }

    for (index = 0; index < size; index++)
    {
	printf("Value checked array[%lu] = [%i]\n", index, array[index]);

	if (array[index] == value)
	{
	    return (index);
	}
    }
    return (-1);
}
