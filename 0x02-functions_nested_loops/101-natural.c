#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int t = 1;
	int total = 0;

	while (t < 1024)
	{
		if (t % 3 == 0)
			total += i;
		else if (t % 5 == 0)
			total += i;

		t++;
	}
	printf("%d\n", total);

	return (0);
}
