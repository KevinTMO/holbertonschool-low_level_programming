#include "holberton.h"

/**
 *_strlen_recursion - will get the lenght of a string
 *@s: this pointer is pointing to an string starting on 0 ('\n')
 *Return: will return the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
