#include "lists.h"

/**
 *listint_len - will get the lenght of the elements
 *@h: is the first node
 *Return: will return the lenght of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

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
