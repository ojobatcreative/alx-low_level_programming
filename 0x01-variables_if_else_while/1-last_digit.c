#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description - this prints the last digit of a random variable n
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;

	printf("Last digit of %d is %d ", n, t);

	if (t > 5)

	printf("and is greater than 5\n");

	else if (t == 0)

	printf("and is 0\n");

	else if (t < 6 && t != 0)

	printf("and is less than 6 and not 0\n");

	return (0);
}
