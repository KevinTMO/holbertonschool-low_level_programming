#include "lists.h"

/**
 *add_nodeint - will add a new node to the list
 *@head: is the address of the first node
 *@n: is the value of the nodes
 *Return: will return the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
