#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	for (; current != NULL; current = current->next, node_count++)
		printf("%d\n", current->n);

	return (node_count);
}
