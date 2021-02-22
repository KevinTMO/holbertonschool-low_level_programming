#include "holberton.h"

/**
 *_strchr - will iterate until c value is met
 *@s: is the pointer pointing to another pointer
 *@c: will the character or value that we don't want
 *Return: will return the result of the pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0' && s[index] != c; index++)
	{
		;
	}
	if (s[index] == c)
	{
		return (&s[index]);
	}
	else
		return (0);
}
