#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, siza;

	siza = size * size;
	while (i < siza)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	while (i < siza)
	{
		if (i % (size - 1) == 0 && i != (siza - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
