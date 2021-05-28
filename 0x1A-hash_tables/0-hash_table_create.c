#include "hash_tables.h"

/**
 *hash_table_create - will create an empty table with nodes
 *@size: will be the size of the table
 *Return: will return the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int index = 0;

	if (size == 0)
	{
		return (NULL);
	}

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	/*array = malloc(sizeof(*array) * size);*/
	array = calloc(size, sizeof(hash_node_t *));

	if (!array)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = NULL;
	}

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
