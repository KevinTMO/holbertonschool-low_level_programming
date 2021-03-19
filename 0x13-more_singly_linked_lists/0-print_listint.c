#include "lists.h"

/**
 *print_listint - will print the elements as decimal
 *@h: will point to head node
 *Return: will return the count of elements
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
