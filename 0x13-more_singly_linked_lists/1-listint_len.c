#include "lists.h"

/**
 * listint_len - Returns the number of elements in
 * a listint_t liked list
 *
 * @h: Pointer to the head node of the list.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nuelm = 0;

	while (h != NULL)
	{
		nuelm++;
		h = h->next;
	}
	return (nuelm);
}
