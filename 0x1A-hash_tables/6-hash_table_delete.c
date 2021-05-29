#include "hash_tables.h"

/**
 *hash_table_delete - will delete all the elements in the table
 *@ht: is the hash table with the elements
 *Return: will return nothing (void), just free
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *current_node;
	size_t index = 0;

	if (!ht)
	{
		return;
	}

	if (!ht->array)
	{
		free(ht);
		return;
	}

	while(index < ht->size)
	{
		temp = (ht->array)[index];
		while(temp)
		{
			current_node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = current_node;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
