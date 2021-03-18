#include "lists.h"

/**
 *_strlen - will return the lenght of a pointer
 *@s: the pointer that we need to check and get the lenght
 *Return: will return the length of the pointer (string)
 */

int _strlen(const char *s) /* added a const for the purpose of this task */
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	return (index);
}

/**
 *add_node - will add a new node to the list getting the length first
 *@head: is the linked list
 *@str: is the data info. of the linked list
 *Return: will return the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (0);
	}
	if (strdup(str) == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
