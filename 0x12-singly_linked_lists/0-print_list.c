#include "lists.h"

/**
 *print_list - will print the values of the list
 *@h: is the first value (head) of the linked list
 *Return: will return the count of values
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
