#include "lists.h"

/**
 *sum_dlistint - will sum all nodes
 *@head: is the first node
 *Return: will return the sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sumNodes = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sumNodes += head->n;
		head = head->next;
	}
	return (sumNodes);
}
