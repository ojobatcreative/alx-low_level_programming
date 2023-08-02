#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t linked list
 *
 * @head: Points to the pointer of the head of the list.
 * @idx: Index where the new node should be added, starting at 0.
 * @n: Data value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *trem;
	unsigned int count = 0;

	if (head == NULL || idx == 0)
	{
		n_node = malloc(sizeof(listint_t));
		if (n_node == NULL)
			return (NULL);

		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	trem = *head;
	while (trem != NULL && nulem < (idx - 1))
	{
		trem = trem->next;
		nulem++;
	}

	if (trem == NULL || trem->next == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = trem->next;
	trem->next = n_node;

	return (n_node);
