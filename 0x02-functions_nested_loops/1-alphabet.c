#include "holberton.h"

/**
 *void print_alphabet this prototype will print an alphabet
 *
 *Return: will not return a value
 */

void print_alphabet(void)
{
	int alpha;
    
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
