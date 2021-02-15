#include "holberton.h"

/**
 *puts2 - print the next character of a string
 *@str: the pointer holding the string
 *Return: will return nothing (void)
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
		str++;
	}
}
