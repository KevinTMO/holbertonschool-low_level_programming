#include "hash_tables.h"

/**
 *hash_table_create - will create an empty hash table
 *@size: will be the size of the hash table
 *Return: will return the hash table or 0 (Null) if fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table; /* will store values of arr and size */
	hash_node_t **array; /* variable to create an array */
	unsigned long int index; /* number to compare with size to create arr */

	if (size == 0)
	{
		return (0);
	}

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (0);
	}

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
	{
		return (0);
	}

	index = 0;

	while (index < size)
	{
		*array = NULL;
		index++;
	}

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
