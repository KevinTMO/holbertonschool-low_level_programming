#include "holberton.h"

/**
 * more_numbers - will print numbers from 0 to 14 ten times
 * Return: will not return a value (void)
 */

void more_numbers(void)
{
	int number;
	int repeat;

	for (repeat = 0; repeat <= 9; repeat++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number <= 9)
			{
				_putchar('0' + number);
			}
			else if (number >= 10)
			{
				_putchar('0' + (number / 10));
				_putchar('0' + (number % 10));
			}
		}
		_putchar('\n');
	}
}
