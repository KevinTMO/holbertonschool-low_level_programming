#include "holberton.h"
#include "stdlib.h"

/**
 *_calloc - will set the memory to zero
 *@nmemb: will represent the memory in the array
 *@size: will represent the type of data
 *Return: will return pointer and free the memory after
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	int index, sumsize = 0;

	if (nmemb == 0)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}

	sumsize = nmemb * size;

	ch = malloc(sumsize);

	if (ch == 0)
	{
		return (0);
	}

	for (index = 0; index < sumsize; index++)
	{
		ch[index] = 0;
	}
	return (ch);
}
