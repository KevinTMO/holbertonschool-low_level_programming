#include "holberton.h"

/**
 *puts_half - print the other half of a string
 *@str: the pointer holding the string
 *Return: will return nothing (void)
 */

void puts_half(char *str)
{
	int index;
	int sindex;

	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}
	if (index % 2 == 0)
	{
		sindex = (index / 2);
	}
	else
	{
		sindex = (index - 1 / 2);
	}
	for (; sindex < index; sindex++)
	{
		_putchar(str[sindex]);
	}
	_putchar('\n');
}
