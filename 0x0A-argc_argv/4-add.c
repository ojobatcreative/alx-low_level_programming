#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int numz, dgt, sumz = 0;

	for (numz = 1; numz < argc; numz++)
	{
		for (dgt = 0; argv[numz][dgt]; dgt++)
		{
			if (argv[numz][dgt] < '0' || argv[numz][dgt] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sumz += atoi(argv[numz]);
	}

	printf("%d\n", sumz);

	return (0);
}
