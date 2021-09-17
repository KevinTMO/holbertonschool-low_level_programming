#include "lists.h"

/**
 *dlistint_len - will get the lenght of the elements
 *@h: is the first node
 *Return: will return the lenght of the elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tmp;

	if (h == NULL)
	{
		return (0);
	}

	tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
