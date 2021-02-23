#include "holberton.h"

/**
 *_strpbrk - will iterate until the matched character
 *@s: is the string to be scanned
 *@accept: is the string containing the characters to match
 *Return: will return the result of the pointer or NULL
 */


char *_strpbrk(char *s, char *accept)
{
	int index;
	int sindex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (sindex = 0; accept[sindex] != '\0'; sindex++)
		{
			if (accept[sindex] == s[index])
			{
				return (&s[index]);
			}
		}
	}
	return (0);
}
