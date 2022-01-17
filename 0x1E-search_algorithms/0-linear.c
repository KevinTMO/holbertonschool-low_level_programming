#include "search_algos.h"

/**
 *linear_search - return a value in a simple array
 *@array: is the array with the elements to compare
 *@size: is the size of the array
 *@value: is the element compare with each element of the array
 *Return: will return the value if found or -1 if not
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
