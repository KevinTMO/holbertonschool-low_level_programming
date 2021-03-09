#include <stdlib.h>
#include "dog.h"

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

/**
 *new_dog - will copy the name and owner name to another variable
 *@name: member 1 name of the dog
 *@age: member 2 age of the dog
 *@owner: member 3 owner name
 *Return: Will return the pointer ndog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *cname;
	char *cowner;

	ndog = malloc(sizeof(dog_t));

	if (ndog == 0)
	{
		return (0);
	}
	ndog->age = age;

	if (name != 0)
	{
		cname = malloc(_strlen(name) + 1);
		if (cname == 0)
		{
			free(cname);
			return (0);
		}
		ndog->name = _strcpy(cname, name);
	}
	else
		ndog->name = 0;

	if (owner != 0)
	{
		cowner = malloc(_strlen(owner) + 1);
		if (cowner == 0)
		{
			free(cowner);
			return (0);
		}
		ndog->owner = _strcpy(cowner, owner);
	}
	else
		ndog->owner = 0;

	return (ndog);
}
