#include "holberton.h"

/**
 *get_bit - will get the bit at nth position
 *@n: will be the number
 *@index: will be the Nth pos to get the bit
 *Return: will return the bit at Nth pos or -1 if index greater than size
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitSize;
	int bitNth;

	bitSize = (sizeof(unsigned long int) * 8);

	if (index > bitSize)
	{
		return (-1);
	}

	bitNth = ((n >> index) & 1);

	return (bitNth);
}
