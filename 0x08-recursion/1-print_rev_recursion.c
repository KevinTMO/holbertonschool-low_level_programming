#include "holberton.h"

/**
 *_print_rev_recursion - will print a string in reverse
 *@s: this pointer is pointing to an string starting on 0 ('\n')
 *Return: will return 0 (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);

	_putchar(*s);
}
