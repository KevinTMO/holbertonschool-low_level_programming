#include "hash_tables.h"

/**
 *hash_table_create - will create an empty table with nodes
 *@size: will be the size of the table
 *Return: will return the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
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

	new_table->array = calloc(size, sizeof(hash_node_t));

	if (new_table->array == NULL)
	{
		free(new_table);
		free(new_table->array);
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		new_table->array[index] = NULL;
	}

	new_table->size = size;

	return (new_table);
}
