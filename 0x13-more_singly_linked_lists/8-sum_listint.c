#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sumz = 0;
	listint_t *crnt;

	crnt = head;

	while (crnt != NULL)
	{
		sumz += current->n;
		crnt = crnt->next;
	}

	return (sumz);
}
