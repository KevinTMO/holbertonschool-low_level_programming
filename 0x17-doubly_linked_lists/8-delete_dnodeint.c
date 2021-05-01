#include "lists.h"

/**
 *delete_dnodeint_at_index - will delete a node at nth position until end
 *@head: will point to first position
 *@index: will be the position to delete
 *Return: will return 1 if sucess or -1 if fails (edge case)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int sindex = 0;
	dlistint_t *temp1, *temp2;

	if (*head == NULL)
	{
		return (-1);
	}

	temp1 = *head;

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	while (temp1 != NULL && sindex < index - 1)
	{
		temp1 = temp1->next;
		sindex++;
	}

	if (temp1 == NULL || temp1->next == NULL)
	{
		return (-1);
	}
	temp2 = temp1->next;
	temp1->next = temp1->next->next;
	free(temp2);

	return (1);
}
