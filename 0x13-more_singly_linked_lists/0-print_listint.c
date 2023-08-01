#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: Pointer to the head node of the list.
 * Return: The number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nuelm = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nuelm++;
	}

	return (nuelm);
}
