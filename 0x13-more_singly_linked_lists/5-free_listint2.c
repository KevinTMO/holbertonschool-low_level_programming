#include "lists.h"

/**
 *free_listint2 - will free the memory using double pointer
 *@head: is a pointer pointing to another pointing with the data
 *Return: will return nothing (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *ptrHead;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		ptrHead = *head;
		*head = ptrHead->next;
		free(ptrHead);
	}
}
