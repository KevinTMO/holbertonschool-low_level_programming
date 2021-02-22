#include "holberton.h"

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
		for (index = 0; index <= n; index++)
		{
			dest[index] = src[index];
		}
	}
	return (dest);
}
