#include "holberton.h"

/**
 *times_table - will print the time table until 9
 *
 *Return: will not return any value
 */

void times_table(void)
{
	int row;
	int column;
	int mult;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = column * row;
			if (column == 0)
			{
				_putchar('0' + mult);
			}
			if (mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (mult > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
