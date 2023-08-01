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
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
