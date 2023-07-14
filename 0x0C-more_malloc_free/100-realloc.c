#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (q = 0; q < new_size; q++)
			p1[q] = old_p[q];
	}

	if (new_size > old_size)
	{
		for (q = 0; q < old_size; q++)
			p1[q] = old_p[q];
	}

	free(ptr);
	return (p1);
}
