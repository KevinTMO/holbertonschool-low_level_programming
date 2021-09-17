#include "lists.h"

/**
 *sum_dlistint - will sum all nodes
 *@head: is the first node
 *Return: will return the sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sumNodes = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp != NULL)
	{
		sumNodes += tmp->n;
		tmp = tmp->next;
	}
	return (sumNodes);
}
