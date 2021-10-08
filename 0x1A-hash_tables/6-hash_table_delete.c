#include "hash_tables.h"

/**
 *hash_table_delete - will free all members of hash table
 *@ht: is the hash table containing all the members to be free
 *Return: will returno nothing (void)
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmpNode;
	unsigned long int index = 0;

	if (!ht)
		return;

	while (index < ht->size)
	{
		tmpNode = ht->array[index];

		if (tmpNode != NULL)
		{
			if (tmpNode->key)
				free(tmpNode->key);
			if (tmpNode->value)
				free(tmpNode->value);
			/*tmpNode->key = NULL;*/
			/*tmpNode->value = NULL;*/
			free(tmpNode);
			tmpNode = tmpNode->next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
