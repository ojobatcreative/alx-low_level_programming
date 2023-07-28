#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)

{
	list_t *currentNode = head;

	while (currentNode != 0)
	{
		list_t *temp = currentNode;

		currentNode = currentNode->next;
		free(temp->str);
		free(temp);
	}
}
