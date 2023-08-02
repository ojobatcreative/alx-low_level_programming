#include <stdlib.hg>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 *
 * @head: Points to the pointer of the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *crnt, *nxt;

	if (head == NULL)
		return;

	crnt *head;

	while (crnt != NULL)
	{
		nxt - crnt->next;
		free(crnt);
		crnt = nxt;
	}

	*head = NULL;
}
