#include "holberton.h"

/**
 *_strcpy - will copy the string of a pointer to another pointer
 *@dest: is the pointer to pasty the copied string
 *@src: is the pointer that hold the string to get copy
 *Return: will return dest value
 */

char *_strcpy(char *dest, char *src)
{
	int index;
	int sindex;

	for (index = 0; src[index] != '\0'; index++)
	{
		;
	}
	for (sindex = 0; sindex <= index; sindex++)
	{
		dest[sindex] = src[sindex];
	}
	return (dest);
}
