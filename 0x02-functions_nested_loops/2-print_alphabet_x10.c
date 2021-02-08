#include "holberton.h"

/**
 *print_alphabet_x10 - will print the alphabet x10 times
 *Return: will not return a value (void)
 */

void print_alphabet_x10(void)
{
	int counter;
	int alpha;

	for (counter = 0; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
