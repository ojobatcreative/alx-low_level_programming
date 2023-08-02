#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 *
 * @head: Points to the head node of the list.
*/

void free_listint(listint_t *head)
{
	listint_t *crnt, *nxt;

	crnt = head;

	while (crnt != NULL)
	{
		nxt = crnt->next;
		free(crnt);
		crnt = nxt;
	}
}
