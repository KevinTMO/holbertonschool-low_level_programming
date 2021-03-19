#include "lists.h"

/**
 *add_nodeint_end - will add a new node at the end
 *@head: is the first node
 *@n: will be the numbers
 *Return: will return the new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));

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
	}
	return (new_node);
}
