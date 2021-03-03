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
		return (NULL);
	}
	else
	{
		for (index = 0; s1[index] != '\0'; index++)
		{
		}
	}
	if (s2 == 0)
	{
		return (NULL);
	}
	else
	{
		for (sindex = 0; s2[sindex] != '\0'; sindex++)
		{
		}
	}
	sumsize = index + sindex + 1;

	nstr = malloc(sizeof(char) * sumsize);

	for (nindex = 0; nindex < index; nindex++)
	{
		nstr[nindex] = s1[nindex];
	}
	for (cindex = 0; cindex < sindex; cindex++, nindex++)
	{
		nstr[nindex] = s2[cindex];
	}

	nstr[nindex] = '\0';

	return (nstr);
	free(nstr);
}
