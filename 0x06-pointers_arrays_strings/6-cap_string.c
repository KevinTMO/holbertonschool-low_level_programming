#include "holberton.h"

/**
 *cap_string - will capitalize all first character of every word
 *@s: is the variable pointing to the array with the strings
 *Return: will return result of the pointer
 */

char *cap_string(char *s)
{
	int index;

	for (index = 0; s[index] != '0'; index++)
	{
		if (index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] = s[index] - 32;
			continue;
		}
		if (s[index] == ' ')
		{
			index++;

			if (s[index] >= 'a' && s[index] <= 'z')
			{
				s[index] = s[index] - 32;
				continue;
			}
		}
		else
		{
			if (s[index] >= 'A' && s[index] <= 'Z')
				s[index] = s[index] + 32;
		}
	}
	return (s);
}
