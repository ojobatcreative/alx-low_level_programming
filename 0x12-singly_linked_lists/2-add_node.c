#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t lgt;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (lgt = 0; str[lgt]; lgt++)
		;

	newNode->len = lgt;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
