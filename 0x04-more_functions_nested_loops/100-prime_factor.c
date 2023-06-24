#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the
 * number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int t;
	long int max;
	long int i;

	t = 612852475143;
	max = -1;

	while (t % 2 == 0)
	{
		max = 2;
		t /= 2;
	}

	for (i = 3; i <= sqrt(t); i = i + 2)
	{
		while (t % i == 0)
		{
			max = i;
			t = t / i;
		}
	}

	if (t > 2)
		max = t;

	printf("%ld\t", max);

	return (0);
}
