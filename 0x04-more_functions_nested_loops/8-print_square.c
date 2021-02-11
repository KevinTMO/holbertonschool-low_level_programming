#include "holberton.h"

/**
 *print_square - will print a sign characters depending on the value of size
 *@size: is the number of number sign to be printed
 *Return: will not return a value (void)
 */

void print_square(int size)
{
	int counter, square;

	if (size < 1)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (square = 1; square <= size; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
