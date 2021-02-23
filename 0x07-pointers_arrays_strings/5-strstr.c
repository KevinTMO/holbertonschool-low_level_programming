#include "holberton.h"

/**
 *_strstr- will locate the substring of a longer string
 *@haystack: is the string to be scanned
 *@needle: is the string containing the characters to match
 *Return: will return the result of the pointer or NULL
 */


char *_strstr(char *haystack, char *needle)
{
	int index;
	int sindex;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (sindex = 0; needle[sindex] == haystack[index]; sindex++)
		{
			if (needle[sindex] == haystack[index])
			{
				return (&needle[sindex]);
			}
		}
	}
	return (0);
}