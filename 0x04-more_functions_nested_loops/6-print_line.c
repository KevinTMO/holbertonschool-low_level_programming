#include "holberton.h"

/**
 *print_line - will print lines depending on the value of n
 *@n: is the number of lines to be printed
 *Return: will not return a value (void)
 */

void print_line(int n)
{
	int counter;

	for (counter = n; counter > 0; counter--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
