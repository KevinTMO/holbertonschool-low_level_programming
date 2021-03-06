#include "holberton.h"
#include "stdlib.h"

/**
 *str_concat - will concatenate two strings after taking size with malloc
 *@s1: is the pointer pointing to the string to copy
 *@s2: is the other pointer pointing to the second string
 *Return: will return the pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int index, sindex, sumsize, nindex, cindex;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
	}
	for (sindex = 0; s2[sindex] != '\0'; sindex++)
	{
		;
	}
	sumsize = index + sindex + 1;
	nstr = malloc(sizeof(char) * sumsize);
	if (nstr == 0)
	{
		return (NULL);
	}
	for (nindex = 0; nindex < index; nindex++)
	{
		nstr[nindex] = s1[nindex];
	}
	for (cindex = 0; cindex < sindex; cindex++, nindex++)
	{
		nstr[nindex] = s2[cindex];
	}
	nstr[index + sindex] = '\0';
	return (nstr);
}
