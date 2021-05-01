#include "lists.h"

/**
 *add_dnodeint_end - will add a new node at the end
 *@head: is the first node
 *@n: will be the numbers
 *Return: will return the new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
		new_node->prev = end_node;
	}
	return (new_node);
}
