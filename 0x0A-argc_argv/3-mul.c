#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int z1;
	int z2;
	int prdt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	z1 = atoi(argv[1]);
	z2 = atoi(argv[2]);
	prdt = z1 * z2;

	printf("%d\n", prdt);

	return (0);
}
