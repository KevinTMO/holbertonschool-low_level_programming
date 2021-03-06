#include "lists.h"

/**
 *free_listint - will free every node in the list using a pointer
 *@head: will be always the head of nodes
 *Return: will return nothing (void)
 */

void free_listint(listint_t *head)
{
	listint_t *ptrHead;

	while (head != NULL)
	{
		ptrHead = head;
		head = head->next;
		free(ptrHead);
	}
}
