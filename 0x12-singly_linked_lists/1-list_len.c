#include "lists.h"

/**
 *list_len - this will return the elements of the linked list
 *@h: is the pointer pointing to a first element
 *Return: will return the count of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
