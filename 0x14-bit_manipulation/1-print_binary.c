#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int prnt_bin = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag_bin = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (prnt_bin)
	{
		if (n & prnt_bin)
		{
			putchar('1');
			flag_bin = 1;
		}
		else if (flag_bin)
		{
			putchar('0');
		}
		prnt_bin >>= 1;
	}

	putchar('\n');
}
