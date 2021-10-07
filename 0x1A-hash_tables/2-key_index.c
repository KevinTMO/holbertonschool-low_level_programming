#include "hash_tables.h"

/**
 *key_index - will return the true index to store a value
 *@key: is the string to get the id from djb2
 *@size: is the size of the hash table
 *Return: will return the index to store values
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
	{
		return (0);
	}

	index = hash_djb2(key) % size;

	return (index);
}
