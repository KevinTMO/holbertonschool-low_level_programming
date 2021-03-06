#include "lists.h"

/**
 *dlistint_len - will get the lenght of the elements
 *@h: is the first node
 *Return: will return the lenght of the elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
