#include "lists.h"

/**
 *listint_len - will get the lenght of the elements
 *@h: is the first node
 *Return: will return the lenght of the elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
