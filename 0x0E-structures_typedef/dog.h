#ifndef DOG_H
#define DOG_H

/**
 *struct dog - will get the data name, age and owner
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner name of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
