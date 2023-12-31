#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int numz = 0, mul, prdt;

	if (n > 15 || n < 0)
		return;
	while (numz <= n)
	{
		for (mul = 0; mul <= n; mul++)
		{
			prdt = numz * mul;
			if (prdt > 99)
			{
				_putchar(prdt / 100 + '0');
				_putchar((prdt / 10 % 10) + '0');
				_putchar(prdt % 10 + '0');
			}
			else if (prdt > 9)
			{
				_putchar(' ');
				_putchar(prdt / 10 + '0');
				_putchar(prdt % 10 + '0');
			}
			else if (mul != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prdt + '0');
			}
			else
				_putchar(prdt + '0');

			if (mul != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		numz++;
	}
}
