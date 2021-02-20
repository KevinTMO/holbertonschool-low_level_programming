#include "holberton.h"

/**
 *rot13 - will swap letter using Rot13 alphabet
 *@s: is the variable pointing to the array with the strings
 *Return: will return the result of the pointer
 */

char *rot13(char *s)
{
	int index;
	int sindex;
	char NotR13[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char R13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (sindex = 0; NotR13[sindex] != '\0'; sindex++)
		{
			if (s[index] == NotR13[sindex])
			{
				s[index] = R13[sindex];
				break;
			}
		}
	}
	return (s);
}
