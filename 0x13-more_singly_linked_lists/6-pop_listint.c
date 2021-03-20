#include "lists.h"

/**
 *pop_listint - will delete a node from the list
 *@head: will point to head pointer
 *Return: will return the data of the next node
 */

int pop_listint(listint_t **head)
{
	listint_t *deleteNode;
	int data_node;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		deleteNode = *head;
		data_node = deleteNode->n;
		*head = deleteNode->next;
		free(deleteNode);
	}
	return (data_node);
}
