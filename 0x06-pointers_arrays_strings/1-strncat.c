#include "holberton.h"

/**
 *_strncat - will concatenate (unite) two strings until position met
 *@dest: is the pointer to s1 (string one)
 *@src: is the pointer to s2 (string two)
 *@n: is the position of the array (using it as condition comparison)
 *Return: will return dest value (string one with string two)
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int sindex;

	for (index = 0; dest[index] != '\0'; index++)
	{
		;
	}
	for (sindex = 0; src[sindex] != src[n]; sindex++)
	{
		dest[index] = src[sindex];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
