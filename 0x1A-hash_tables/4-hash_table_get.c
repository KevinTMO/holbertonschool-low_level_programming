#include "hash_tables.h"

/**
 *hash_table_get - will retrieve a value after getting the key
 *@ht: is the hash table created
 *@key: is the key string to find so we can get the value
 *Return: will return the value if success or NULL if fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmpNode;
	unsigned long int index;
	char *copyKey;

	if (!ht || !key)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	tmpNode = ht->array[index];

	copyKey = strdup(key);

	while (tmpNode && strcmp(tmpNode->key, key) != 0)
	{
		tmpNode = tmpNode->next;
	}

	free(copyKey); /* don't need it after finding it */

	if (!tmpNode)
	{
		return (NULL);
	}

	return (tmpNode->value);
}
