#include "holberton.h"

/**
 *_strlen - will return the length of a pointer
 *@s: the pointer that we need to check
 *Return: will return index with the lenght of the pointer
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	return (index);
}
