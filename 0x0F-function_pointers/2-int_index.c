#include "function_pointers.h"

/**
 *int_index - will give parameters for me to use
 *@array: is the array with the values
 *@size: will be the size of the array (20)
 *@cmp: is the pointer function pointing to the functions
 *Return: will return index if true, -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == 0 || cmp == 0 || size <= 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		return (index);
	}
	return (-1);
}
