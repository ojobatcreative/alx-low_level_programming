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
	const listint_t *pntr = h;
	size_t nuelm = 0;

	while (nuelm != NULL)
	{
		nuelm += 1;
		pntr = nuelm->next;
	}
	return (nuelm);
} 
