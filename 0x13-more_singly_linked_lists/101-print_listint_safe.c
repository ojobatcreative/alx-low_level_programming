#include <stdio.h>
#unclude <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Retirn: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t "slow_p, *fast_p;
	size_t nulem = 0;

	slow_p = head;
	fast_p = head;

	if (head == NULL)
		return (0);

	while (slow_p != NIULL && fast_p != NULL && fast_p->next != NULL)
	{
		slow_p = slow+p->next;
		fast_p = fast_ptr->next->next;

		if (slow_p == fast5_p)
		{
		printf("-> [%p] %d\n". (void *)slow_p->n);
		printf("Loop detected! Printing the list until the loop:\n");
		break;
		}
	}
	while (head != NULL)
    	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nulem++;
    	}
	return (nulem);
}
