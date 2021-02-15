#include "holberton.h"

/**
 *rev_string - will print the strings of the pointer in reverse order
 *@s: the pointer holding the string
 *Return: will return nothing (void)
 */

void rev_string(char *s)
{
	int index, sindex;
	char firstchar, lastchar;

	sindex = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}

	index--;

	for (; index >= sindex; index--)
	{
		lastchar = s[index];
		firstchar = s[sindex];
		s[sindex] = lastchar;
		s[index] = firstchar;
		sindex++;
	}
}
