#include "lists.h"

/**
 *dlistint_len - will get the lenght of the elements
 *@h: is the first node
 *Return: will return the lenght of the elements
 */

size_t dlistint_len(const dlistint_t *h)
{
        int count = 0;

        if (h == NULL)
        {
                return (0);
        }

        while (h != NULL)
        {
                count++;
                h = h->next;
        }
        return (count);
}

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
		return (add_dnodeint(h, n));
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
	if (idx == dlistint_len(*h))
	{
		return (add_dnodeint_end(h, n));
	}

	new_node->next = tmpNode->next;
	new_node->prev = tmpNode->prev;
	tmpNode->next = new_node;

	return (new_node);
}
