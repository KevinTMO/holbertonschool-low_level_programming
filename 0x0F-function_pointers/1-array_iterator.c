#include "function_pointers.h"

/**
 *array_iterator - will iterate inside an array using a pointer func
 *@array: is the array with the values
 *@size: is the size using a typedef sizeof
 *@action: is pointing to the functions to print
 *Return: will return void (nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
