#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int rn;
	long int max;
	long int i;

	rn = 612852475143;
	max = -1;

	while (rn % 2 == 0)
	{
		max = 2;
		rn /= 2;
	}

	for (i = 3; i <= sqrt(rn); i = i + 2)
	{
		while (rn % i == 0)
		{
			max = i;
			rn = rn / i;
		}
	}

	if (rn > 2)
		max = rn;

	printf("%ld\rn", max);

	return (0);
}
