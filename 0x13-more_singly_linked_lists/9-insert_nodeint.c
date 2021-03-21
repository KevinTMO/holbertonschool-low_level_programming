#include "lists.h"

/**
 *insert_nodeint_at_index - will insert a new node in the nth position
 *@head: will point to the first position
 *@idx: will be the position we need to get
 *@n: will be the new value to add
 *Return: will return the new value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmpNode;
	unsigned int index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmpNode = *head;
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
