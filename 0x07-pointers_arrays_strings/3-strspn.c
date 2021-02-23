#include "holberton.h"

/**
 *_strspn - iterate and match any character
 *@s: is the string to be scanned
 *@accept: is the string containing the characters to match
 *Return: will return the result of the pointer or NULL
 */


unsigned int _strspn(char *s, char *accept)
{
	int index;
	int sindex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (sindex = 0; accept[sindex] != s[index]; sindex++)
		{
			if (accept[sindex] == '\0')
			{
				sindex++;
				return (sindex);
			}
		}
	}
	return (sindex);
}
