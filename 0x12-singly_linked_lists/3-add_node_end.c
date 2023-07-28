#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_Node = malloc(sizeof(list_t));

	if (new_Node == 0)
	{
		return (0);
	}

	new_Node->str = strdup(str);

	if (new_Node->str == 0)
	{
		free(new_Node);
		return (0);
	}

	new_Node->next = 0;

	if (*head == 0)
	{
		*head = new_Node;
	}
	else
	{
		list_t *current = *head;

	while (current->next != 0)
	{
		current = current->next;
	}
	current->next = new_Node;
	}

	return (new_Node);
}
