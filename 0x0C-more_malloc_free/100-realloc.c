#include "holberton.h"
#include "stdlib.h"

/**
 *_realloc - will allocate new memory to a new pointer
 *@ptr: it holds the old data
 *@old_size: is the old size of ptr
 *@new_size: is the new space for ptrNew
 *Return: will free memory of PTR and then return ptrNew
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrNew;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == 0)
	{
		ptrNew = malloc(new_size);
		return (ptrNew);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	ptrNew = malloc(new_size);

	_memcpy(ptrNew, ptr, old_size);

	free(ptr);
	return (ptrNew);
}

/**
 *_memcpy - will copy the elements of one array to another
 *@src: is the array with the elements
 *@dest: is the array that will get the elements from src
 *@n: is the size of size of the arrays
 *Return: will return the result of the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	if (n > 0)
	{
		for (index = 0; index < n; index++)
		{
			dest[index] = src[index];
		}
	}
	return (dest);
}
