#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int r, s;

	r = s = 0;
	while (r < l)
	{
		if (str[r] != '0')
			s = 1;
		if (s || r == l - 1)
			_putchar(str[r]);
		r++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int s, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (s = num_index, k = dest_index; s >= 0; s--, k--)
	{
		mul = (n - '0') * (num[s] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int r, s;

	for (r = 1; r < 3; r++)
	{
		for (s = 0; av[r][s]; s++)
		{
			if (av[r][s] < '0' || av[r][s] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void init(char *str, int l)
{
	int r;

	for (r = 0; r < l; r++)
		str[r] = '0';
	str[r] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, tr, r;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (tr = 0; e[tr]; tr++)
			_putchar(e[tr]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (tr = 0; e[tr]; tr++)
			_putchar(e[tr]);
		exit(98);
	}
	init(a, ln - 1);
	for (tr = l2 - 1, r = 0; tr >= 0; tr--, r++)
	{
		t = mul(argv[2][tr], argv[1], l1 - 1, a, (ln - 2) - r);
		if (t == NULL)
		{
			for (tr = 0; e[tr]; tr++)
				_putchar(e[tr]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
