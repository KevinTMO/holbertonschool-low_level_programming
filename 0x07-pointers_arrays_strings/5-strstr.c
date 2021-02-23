#include "holberton.h"

/**
 *_strstr- will locate the substring of a longer string
 *@haystack: is the string to be scanned
 *@needle: is the string containing the characters to match
 *Return: will return the result of the pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*needle != '\0' && *search != '\0' && *search == *haystack)
		{
			haystack++;
			search++;
		}
		if (*search == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
