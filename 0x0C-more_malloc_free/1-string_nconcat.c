#include "holberton.h"
#include "stdlib.h"

/**
 *string_nconcat - will concatenate two strings in one new string
 *@s1: is the first string to conca
 *@s2: is the second string to conca
 *@n: will limit the size of the second string if not greater or equal
 *Return: will return pointer and free the memory after
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int index = _strlen(s1);
	unsigned int sindex = _strlen(s2);
	unsigned int nindex, sumsize = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	if (n >= sindex)
		sumsize = index + sindex;
	else
		sumsize = index + n;

	nstr = malloc(sizeof(char) * sumsize + 1);
	if (nstr == 0)
		return (0);
	for (nindex = 0; nindex < index; nindex++)
	{
		nstr[nindex] = s1[nindex];
	}
	if (n >= sindex)
		for (sindex = 0; s2[sindex] != '\0'; sindex++)
		{
			nstr[nindex] = s2[sindex];
			nindex++;
		}
	else
		for (sindex = 0; sindex < n; sindex++)
		{
			nstr[nindex] = s2[sindex];
			nindex++;
		}
	nstr[nindex] = '\0';
	return (nstr);
}

/**
 *_strlen - will return the length of a pointer
 *@s: the pointer that we need to check
 *Return: will return index with the lenght of the pointer
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	return (index);
}
