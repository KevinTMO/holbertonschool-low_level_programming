#include "hash_tables.h"

/**
 *key_index - will return the index of a key
 *@key: will be the data
 *@size: will be the size of the data
 *Return: will return the index of the key or 0 if size is 0 or less
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index; /* same as unsigned long int */

	if (size < 1)
	{
		return (0);
	}

	index = hash_djb2(key);

	return (index % size);
}
