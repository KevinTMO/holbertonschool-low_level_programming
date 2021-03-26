#include "holberton.h"

/**
 *flip_bits - will count every bits that is different after flip
 *@n: is one of the number
 *@m: is the other one to compare with XOR (^)
 *Return: will return the count of the flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = 0, count = 0;

	xorResult = n ^ m;

	while (xorResult > 0)
	{
		if (xorResult & 1)
		{
			count++;
		}
		xorResult >>= 1;
	}
	return (count);
}
