#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - will free all the variable that got memory
 *@d: is the pointer pointing to those variables
 *Return: will return nothing (void)
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}

	if (d->name)
	{
		free(d->name);
	}

	if (d->owner)
	{
		free(d->owner);
	}

	free(d);
}
