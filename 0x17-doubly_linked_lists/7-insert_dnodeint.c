#include "lists.h"

/**
 *insert_dnodeint_at_index - will insert a new node in the nth position
 *@h: will point to the first position
 *@idx: will be the position we need to get
 *@n: will be the new value to add
 *Return: will return the new value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmpNode;
	unsigned int index = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	tmpNode = *h;
	while (index < idx - 1)
	{
		tmpNode = tmpNode->next;
		index++;

		if (tmpNode == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmpNode->next;
	tmpNode->next = new_node;
	return (new_node);
}
