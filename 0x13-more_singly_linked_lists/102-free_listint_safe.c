#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lgt = 0;
	int dif_e;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif_e = *h - (*h)->next;
		if (dif_e > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lgt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lgt++;
			break;
		}
	}

	*h = NULL;

	return (lgt);
}
