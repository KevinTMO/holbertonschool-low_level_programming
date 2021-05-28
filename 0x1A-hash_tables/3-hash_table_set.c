#include "hash_tables.h"

/**
 *create_hash_node - will create || add a node if there's collision
 *@key: it represent the beggining of a the list data
 *@ht: is the hash table that contain the array && size
 *@index: is the address to insert the data
 *@value: value is the next data in the list
 *Return: will return 1 if succeed creating || adding or 0 if fails
 */

int create_hash_node(hash_table_t *ht, const char *key, const char *value,
		     size_t index)
{
	hash_node_t *node = NULL;
	char *kye;
	char *val;

	node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (0);
	}

	kye = strdup(key);
	if (!kye)
	{
		free(node);
		return (0);
	}

	val = strdup(value);
	if (!val)
	{
		free(kye);
		free(node);
		return (0);
	}

	node->key = kye;
	node->value = val;

	if (ht->array[index] == NULL)
	{
		node->next = ht->array[index];
	}

	else
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;

	return (1);
}

/**
 *hash_table_set - will check the arguments and see if theres something in arr
 *or not to add or call a function to create a new node
 *@ht: is the hash table that contain the array && size
 *@key: it represent the beggining of a the list data
 *@value: will be the next data in the list
 *Return: will return 1 if suceed or 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	size_t index;
	char *val;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node && (strcmp(key, node->key) == 1))
	{
		node = node->next;
	}

	if (node != NULL)
	{
		val = strdup(value);
		if (!val)
		{
			return (0);
		}
		if (node->value)
		{
			free(node->value);
		}
		node->value = val;
		return (1);
	}
	return (create_hash_node(ht, key, value, index));
}
