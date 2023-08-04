#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bin, num_bin = 0;
	unsigned long int crnt;

	for (bin = 63; bin >= 0; bin--)
	{
		crnt = n >> bin;

		if (crnt & 1)
		{
			_putchar('1');
			num_bin++;
		}
		else if (num_bin)
			_putchar('0');
	}
	if (!num_bin)
		_putchar('0');
}