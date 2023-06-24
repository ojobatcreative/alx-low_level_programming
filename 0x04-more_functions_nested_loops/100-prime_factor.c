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
	int t;
	long num = 612852475143;

	for (t = (int) sqrt(num); t > 2; t++)
	{
		if (num % t == 0)
		{
			printf("%d\n", t);
			break;
		}
	}

	return (0);
}
