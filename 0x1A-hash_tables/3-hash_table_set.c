#include "hash_tables.h"

/**
 *create_node - will create a node for the first time  at index
 *@ht: is the ht created
 *@key: is the key string to add
 *@value: is the value string to add
 *@index: is the pos to add the node after getting key/val
 *Return: will return 1 if success or 0 if fails
 */

int create_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *node;
	char *copyKey;
	char *copyValue;

	node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (0);
	}

	copyKey = strdup(key);

	if (!copyKey)
	{
		free(node);
		return (0);
	}

	copyValue = strdup(value);

	if (!copyValue)
	{
		free(copyKey);
		free(copyValue);
		return (0);
	}

	node->key = copyKey;
	node->value = copyValue;

	/* In case there's no index to add the node */

	if (ht->array[index] == NULL)
	{
		node->next = NULL;
	}

	else
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;

	return (1);
}

/**
 *hash_table_set - will set key/values in a hash table
 *@ht: is the hash table with size
 *@key: is the key of type string char
 *@value: is the value of type string
 *Return: will return 1 if succcess or 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmpNode;
	unsigned long int index;
	char *copyVal;


	if (!ht || !(ht->array) || !key || !value)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	tmpNode = ht->array[index];

	/**
	 * Move if key && ->key are not equals
	 * This is expecting there are already nodes in ht
	 */

	while (tmpNode != NULL && strcmp(tmpNode->key, key) != 0)
	{
		tmpNode = tmpNode->next;
	}

	/**
	 * In case the key is something else than not equal
	 * Then check if there's NULL, but if not then update value of node
	 * You need to duplicate because args key, value keeps changing
	 */

	if (tmpNode != NULL)
	{
		copyVal = strdup(value);
		if (!copyVal)
		{
			free(copyVal);
			return (1);
		}
		if (tmpNode->value) /* check if memVal already got something */
		{
			free(tmpNode->value); /* del old value to update */
		}
		tmpNode->value = copyVal;
		return (1); /* return since the update was success */
	}

	return (create_node(ht, key, value, index));
}
