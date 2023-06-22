#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;
	unsigned long int m, n, next, sum;

	m = 1;
	n = 2;
	sum = 0;

	for (l = 1; l <= 33; ++l)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + n;
		m = n;
		n = next;
	}

	printf("%lu\n", sum);

	return (0);
