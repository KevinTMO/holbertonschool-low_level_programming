#include "function_pointers.h"

/**
 *
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == 0 || action == 0)
	{
		return;
	}

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
