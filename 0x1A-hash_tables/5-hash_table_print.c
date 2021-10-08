#include "hash_tables.h"

/**
 *hash_table_print - will print the hash table key/vals pair
 *@ht: is the hash table
 *Return: will return nothing (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmpNode;
	char *comSpace = "";

	if (!ht)
	{
		return;
	}

	putchar('{');

	while (index < ht->size)
	{
		tmpNode = ht->array[index];

		while (tmpNode)
		{
			printf("%s'%s': '%s'", comSpace, tmpNode->key,
			       tmpNode->value);
			comSpace = ", ";
			tmpNode = tmpNode->next;
		}
		index++;
	}
	printf("}\n");
}
