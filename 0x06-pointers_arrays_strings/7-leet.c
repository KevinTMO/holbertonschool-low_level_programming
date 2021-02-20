#include "holberton.h"

/**
 *leet - will change letter(upper and lower) for numbers
 *@s: is the variable pointing to the array with the strings
 *Return: will return the result of the pointer
 */

char *leet(char *s)
{
	int index;
	int sindex;
	char number[] = {"4307143071"};
	char letter[] = {"aeotlAEOTL"};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (sindex = 0; letter[sindex] != '\0'; sindex++)
		{
			if (s[index] == letter[sindex])
			{
				s[index] = number[sindex];
			}
		}
	}
	return (s);
}
