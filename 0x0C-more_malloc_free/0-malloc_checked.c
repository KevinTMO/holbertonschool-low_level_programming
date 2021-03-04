#include "holberton.h"
#include "stdlib.h"

/**
 *malloc_checked - will allocated memory using malloc
 *@b: is the variable holding the numbers
 *Return: will return the pointer or exit if null with 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	else
		return (mem);
}
