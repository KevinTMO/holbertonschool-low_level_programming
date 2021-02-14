#include "holberton.h"

/**
 *print_rev - will print the string of the pointer in reverse
 *@s: the pointer holding the string
 *Return: will return nothing (void)
 */

void print_rev(char *s)
{
	int index;
	int print;

	for (index = 0; s[index] != '\0'; index++)
	{
		print = s[index];
	}

	s--;

	for (print = index; print >= 0; print--)
	{
		if (print != '\0')
		{
			_putchar(s[print]);
		}
	}
}
