i#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a
 * listint_t linked list.
 * @head: Points to the pointer of the head node of the list.
 * @index: Index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crnt, *trem;
	unsigned int nulem = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		trem = *head;
		*head = (*head)->next;
		free(trem);
		return (1);
	}

	crnt = *head;

	while (crnt != NULL && nulem < (index - 1))
	{
		crnt = crnt->next;
		nulem++;
	}

	if (crnt == NULL || crnt->next == NULL)
		return (-1);

	trem = crnt->next;
	crnt->next = trem->next;
	free(trem);

	return (1);
}
