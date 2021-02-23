#include "holberton.h"

/**
 *_strstr- will locate the substring of a longer string
 *@haystack: is the string to be scanned
 *@needle: is the string containing the characters to match
 *Return: will return the result of the pointer or NULL
 */


char *_strstr(char *haystack, char *needle)
{
	int index = 0;

	for (; haystack[index] != '\0' && needle[index] != '\0'; haystack++)
	{
		while (haystack[index] == needle[index])
		{
			index++;

			if (needle[index])
			{
				return (haystack);
			}
		}
	}
	return (0);
}
