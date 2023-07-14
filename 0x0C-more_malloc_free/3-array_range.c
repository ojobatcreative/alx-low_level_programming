#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to new arrays.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int rng, y;
	int *ptr;

	rng = 0;

	if (min > max)
		return (NULL);

	rng = ((max + 1) - min);

	ptr = malloc(rng * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; y < rng; y++)
	{
		*(ptr + y) = min + y;
	}

	return (ptr);
}
