#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - new node is added to the beginning of
 * a listint_t linked list
 *
 * @head: Points to the pointer of the head node of the list.
 * @n: The value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;
	return (n_node);
}
