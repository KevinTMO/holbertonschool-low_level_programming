#include "holberton.h"

/**
 *_strncpy - will copy two strings and append the differences with null bytes
 *@dest: is the pointer to s1 (string one)
 *@src: is the pointer to the string written
 *@n: is the characters to copy
 *Return: will return dest value (the result of the copy)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index != n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
