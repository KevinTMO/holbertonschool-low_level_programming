#include "holberton.h"

/**
 *set_bit - will set the value of a bit to 1
 *@n: is the number
 *@index: is the position to set the value to 1
 *Return: will return 1 if sucess or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitSize;
	unsigned long int mask = 1;

	bitSize = (sizeof(unsigned long int) * 8);

	if (index > bitSize)
	{
		return (-1);
	}

	mask <<= index;

	*n = (*n | mask);

	return (1);
}
