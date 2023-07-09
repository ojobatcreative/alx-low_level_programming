#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cint, koin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cint = atoi(argv[1]);

	while (cint > 0)
	{
		koin++;
		if ((cint - 25) >= 0)
		{
			cint -= 25;
			continue;
		}
		if ((cint - 10) >= 0)
		{
			cint -= 10;
			continue;
		}
		if ((cint - 5) >= 0)
		{
			cint -= 5;
			continue;
		}
		if ((cint - 2) >= 0)
		{
			cint -= 2;
			continue;
		}
		cint--;
	}

	printf("%d\n", koin);

	return (0);
}
