#include "holberton.h"
#include "stdlib.h"

/**
 *create_array - will create an array of chars with a specific char
 *@size: is the size of the array
 *@c: is the specific character
 *Return: will return the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	ch = malloc(sizeof(*ch) * size);

	for (index = 0; index < size; index++)
	{
		ch[index] = c;
	}
	ch[index] = '\0';

	return (ch);
}
