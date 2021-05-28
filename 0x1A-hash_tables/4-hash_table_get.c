#include "hash_tables.h"

/**
 *hash_table_get - this will get the value at key index
 *@ht: is the hash table created with the array
 *@key: it represent the beggining of a the list data
 *Return: will return the value or NULL if fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *node;

	if (!ht || !key || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];

	while (node != NULL && (strcmp(key, node->key) != 0))
	{
		node = node->next;
	}
	if (node == NULL)
	{
		return (NULL);
	}

	return (node->value);
}
