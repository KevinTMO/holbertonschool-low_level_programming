#include "lists.h"

/**
 *get_nodeint_at_index - get the index of the node that we want
 *@head: is the first node
 *@index: is the position we want
 *Return: will return head if we get the position or NULL if false
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterative = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (iterative < index && head != NULL)
	{
		iterative++;
		head = head->next;
	}

	if (iterative == index)
	{
		return (head);
	}
	return (0);
}
