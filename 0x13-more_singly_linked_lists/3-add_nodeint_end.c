#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a
 * listint_t liked list
 *
 * @head: Points to the pouinter of the head of the list.
 * @n: The value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;

		temp->nexrt = n_node;
	}

	return (n_node);
}
