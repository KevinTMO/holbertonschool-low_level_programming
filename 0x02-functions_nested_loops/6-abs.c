#include "holberton.h"

/**
 *_abs - will get the absoulet value of a number
 * @n: will get the number for the absolute value
 * Return: if -n will be negative, if n will be positive the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	return(0);
}
