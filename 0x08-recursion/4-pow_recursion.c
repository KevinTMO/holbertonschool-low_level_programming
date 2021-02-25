#include "holberton.h"

/**
 *_pow_recursion - raise x to the power of y and return the value
 *@x: this will be variable to raise power
 *@y: this will be the variable for power
 *Return: will return 1 if Y equal to 0 or -1 if less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
