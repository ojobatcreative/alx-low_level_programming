#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to be printed
 */
void print_rev(char *s)
{
	int n, m, lgt;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	lgt = n;

	for (m = lgt - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}

	_putchar('\n');
}
