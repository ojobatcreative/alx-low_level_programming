#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int fi, ti;

	for (fi = 0; fi < n--; fi++)
	{
		ti = a[fi];
		a[fi] = a[n];
		a[n] = ti;
	}
}
