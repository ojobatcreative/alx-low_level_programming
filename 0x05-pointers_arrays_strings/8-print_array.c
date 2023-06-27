#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 */

void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
