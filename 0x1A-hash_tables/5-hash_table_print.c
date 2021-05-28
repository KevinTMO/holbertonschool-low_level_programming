#include "hash_tables.h"

/**
 *hash_table_print - will print the key && value of the hash table in that ord
 *@ht: is the hash table with the key && values
 *Return: will return nothing (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t index = 0;
	hash_node_t *node;
	char *commas = "";

	if (!ht || !(ht->array))
	{
		return;
	}

	printf("{");
	while (index < ht->size)
	{
		node = (ht->array)[index];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", commas, node->key, node->value);
			commas = ", ";
			node = node->next;
		}
		index++;
	}
	printf("}");
	printf("\n");
}
