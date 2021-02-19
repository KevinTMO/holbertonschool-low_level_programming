#include "holberton.h"

/**
 *_strcmp - will compare two strings and return the difference
 *@s1: is the first string
 *@s2: is the second string
 *Return: will return the difference value in the statemen, if not return 0
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		else
			return (0);
	}
}
