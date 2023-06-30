#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n_1;

	n_1 = n;

	if (n < 0)
	{
		_putchar('-');
		n_1 = -n;
	}

	if (n_1 / 10 != 0)
	{
		print_number(n_1 / 10);
	}
	_putchar((n_1 % 10) + '0');
}
