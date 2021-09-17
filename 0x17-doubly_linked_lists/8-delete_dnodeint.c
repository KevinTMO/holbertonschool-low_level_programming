#include "lists.h"

/**
 *delete_dnodeint_at_index - will delete a node at nth position until end
 *@head: will point to first position
 *@index: will be the position to delete
 *Return: will return 1 if sucess or -1 if fails (edge case)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	while (index != 0 && tmp->next != NULL)
	{
		index--;
		tmp = tmp->next;
	}

	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
		}
		free(tmp);
		return (1);
	}
	return (-1);
}
