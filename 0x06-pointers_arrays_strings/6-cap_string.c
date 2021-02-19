#include "holberton.h"

/**
 *cap_string - will capitalize all first character of every word
 *@s: is the variable pointing to the array with the strings
 *Return: will return the result of the pointer
 */

char *cap_string(char *s)
{
	int index;
	int sindex;
	char sp[] = {'\"', ' ', '?', '!', '\n', '\t', '(', ')', '.',
		     '*', '+', '#', '%'};

	index = 0;

	if (s[index] >= 'a' && s[index] <= 'z')
	{
		s[index] = s[index] - 32;
		index++;
	}

	for (; s[index] != '\0'; index++)
	{
		for (sindex = 0; sp[sindex] != '\0'; sindex++)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
			{
				if (s[index - 1] == sp[sindex])
				{
					s[index] = s[index] - 32;
				}
			}
		}
	}
	return (s);
}
