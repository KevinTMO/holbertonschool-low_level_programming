#include "lists.h"

/**
 *free_list - this will free the nodes
 *@head: will point to the beginning of the nodes
 *Return: will return nothing (just free)
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
