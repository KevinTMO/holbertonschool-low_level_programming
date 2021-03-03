#include "holberton.h"
#include "stdlib.h"

/**
 *_strdup - will copy the string of on array to another using mallocs
 *to get the size first
 *@str: str is the pointer pointing to the string to copy
 *Return: will return the pointer
 */

char *_strdup(char *str)
{
	char *ch;
	int index;
	int sindex;

	if (str == 0)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}

	ch = malloc(sizeof(char) * index);

	if (ch == 0)
	{
		return (NULL);
	}
	else
	{
		for (sindex = 0; sindex <= index; sindex++)
		{
			ch[sindex] = str[sindex];
		}
	}

	ch[sindex] = '\0';

	return (ch);
	free(ch);
}
