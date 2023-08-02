#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_int *crnt;
	unsigned int nulem = 0;

	crnt = head;

	while (crnt != NULL)
	{
		if (nulem == index)
			return (crnt);

	crnt = crnt->next;
	nulem++;
	}

	return (NULL);
}
