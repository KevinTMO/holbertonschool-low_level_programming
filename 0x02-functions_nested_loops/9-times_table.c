#include "holberton.h"

/**
 *times_table - will print the 9 times table
 *
 * Return: will not return a value (void)
 */

void times_table(void)
{
	int num;
	int table;
	int mult;
	int firstdigit;

	for (table = 0; table <= 9; table++)
	{
		for (num = 0; num <= 9; num++)
		{
			mult = num * table;
			firstdigit = (mult / 10 + '0');

			if (firstdigit != '0')
			{
				_putchar(mult / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(mult % 10 + '0');
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
