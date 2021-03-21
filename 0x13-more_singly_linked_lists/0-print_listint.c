#include "lists.h"

/**
 *print_listint - will print the elements as decimal
 *@h: will point to head node
 *Return: will return the count of elements
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{

	printf("%d\n", h->n);
	h = h->next;
	count++;

	}
	return (count);
}
