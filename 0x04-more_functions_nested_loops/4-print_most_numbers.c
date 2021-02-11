#include "holberton.h"

/**
 *print_most_numbers - will print numbers from 0 to 9 except for 2 and 4
 *Return: will not return a value (void)
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	        if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}
