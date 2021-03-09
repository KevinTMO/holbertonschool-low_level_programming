#include <stdio.h>
#include "dog.h"

/**
 *print_dog - will print name, age and owner name
 *@d: is the pointer pointing to the members of struct dog
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	(d->name == 0) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == 0) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}
