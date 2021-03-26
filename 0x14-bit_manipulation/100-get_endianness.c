#include "holberton.h"

/**
 *get_endianness - Write a function that checks the endianness.
 *Return: will return nothing (void)
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;
	return (*c);
}
