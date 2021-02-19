#include "holberton.h"

/**
 *string_toupper - will change lowercase to uppercase
 *@s: is the variable pointing to the array with the characters
 *Return: will return the result of the pointer
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
