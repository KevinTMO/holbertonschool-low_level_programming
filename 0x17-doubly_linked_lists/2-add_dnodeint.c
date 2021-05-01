#include "lists.h"

/**
 *add_dnodeint - will add a new node to the list
 *@head: is the address of the first node
 *@n: is the value of the nodes
 *Return: will return the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
