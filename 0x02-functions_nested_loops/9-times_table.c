#include "main.h"

/**
 * times_table - prints the 9 times table,starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int o, p, q, r, s;

	for (o = 0; o <= 9; o++)
	{
	for (p = 0; p <= 9; p++)
	{
	q = o + p;
	if (q > 9)
	{
	r = q % 10;
	s = (q - r) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(s + '0');
	_putchar(r + '0');
	}
	else
	{if (p != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(q + '0');
	}
	}
	_putchar('\n');
	}
}
