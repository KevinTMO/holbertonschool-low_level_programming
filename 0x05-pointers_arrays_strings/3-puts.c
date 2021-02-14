#include "holberton.h"

/**
 *_puts - will print the string of the pointer str
 *@str: the pointer holding the string
 *Return: will return nothing (void)
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
