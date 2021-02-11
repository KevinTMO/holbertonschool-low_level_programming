#include "holberton.h"

/**
 *print_diagonal - will back slash characters depending on the value of n
 *@n: is the number of slash to be printed
 *Return: will not return a value (void)
 */

void print_diagonal(int n)
{
	int counter;
	int diag;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			for (diag = 1; diag < counter; diag++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
