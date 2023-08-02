#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Points to the Pointer of the head node of the list.
 * Return: The size of the last that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *crnt, *temp;
	size_t sizze = 0;

	if (h == NULL || *h == NULL)
	return (0);

	crnt = *h;

	while (crnt != NULL)
	{
		sizze;
		temp = crnt;
		crnt = crnt->next;

		if (temp->next == *h)
		{
			free(temp);
			*h = NULL;
			return (sizze);
		}

		temp->next = NULL;
		free(temp);
	}

	*h = NULL;
	return (sizze);
}
