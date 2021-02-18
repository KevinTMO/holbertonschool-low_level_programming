#include "holberton.h"

/**
 *_strcat - will concatenate (unite) two strings using two pointers
 *@dest: is the pointer to s1 (string one)
 *@src: is the pointer to s2 (string two)
 *Return: will return dest value (string one with string two)
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int sindex;

	for (index = 0; dest[index] != '\0'; index++)
	{
		;
	}
	for (sindex = 0; src[sindex] != '\0'; sindex++)
	{
		dest[index] = src[sindex];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
