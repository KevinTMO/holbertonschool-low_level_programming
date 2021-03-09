#include "dog.h"

/**
 *init_dog - initialize a variable pointer of type struct dog
 *@d: is the variable for type struct dog
 *@name: member 1 for name of the dog
 *@age: member 2 for age of the dog
 *@owner: member 3 for name of the owner
 *Return: Will return nothing (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
