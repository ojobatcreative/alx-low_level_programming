#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
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
	new_Node->next = *head;

	*head = new_Node;

	return (new_Node);
}
