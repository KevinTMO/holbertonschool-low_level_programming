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
 *add_node_end - will add a new node to the list getting the length first
 *@head: is the linked list
 *@str: is the data info. of the linked list
 *Return: will return the new end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
			end_node->next = new_node;
		}
	}
	return (new_node);
}
