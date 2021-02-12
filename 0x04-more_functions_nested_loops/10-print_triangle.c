#include "holberton.h"

/**
 *print_triangle - will print a triangle with hashtags sings
 *@size: is the value for the size of the triangle
 *Return: will return nothing (void)
 */

void print_triangle(int size)
{
	int repeat;
	int space;
	int hash;

	if (size <= 0)
		_putchar('\n');

	for (repeat = 1; repeat <= size; repeat++)
	{
		for (space = 1; space <= (size - repeat); space++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= repeat; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
