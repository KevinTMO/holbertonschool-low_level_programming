#include "holberton.h"

/**
 *print_numbers - will print numbers from 0 to 9
 *Return: will not return a value (void)
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
