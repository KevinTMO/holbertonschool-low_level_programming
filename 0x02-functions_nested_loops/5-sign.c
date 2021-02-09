#include "holberton.h"

/**
 *print_sign - will print signs, commas and space after checking the numbers
 *@n: this is the variable to compare the numbers
 *Return: will return 1 if positive, -1 if negative and 0 if zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
