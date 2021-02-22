#include "holberton.h"

/**
 *_memset - will fill the memory block that is pointing
 *@s: is the first parameter that point to the memory block to fill
 *@b: is the second parameter to pass the memory to the pointer
 *@n: is the numbers of the memory that is passing
 *Return: will return the result of the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	if (n > 0)
	{
		for (index = 0; index < n; index++)
		{
			s[index] = b;
		}
	}
	return (s);
}
