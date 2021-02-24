#include "holberton.h"

/**
 *_puts_recursion - will iterate the function until if comes true
 *@s: this pointer is pointing to an string with "Betty Holberton"
 *Return: will return 0 (void)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
