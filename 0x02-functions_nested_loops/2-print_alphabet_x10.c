#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)

{
	char pal;
	int l = 0;

	while (l <= 9)
	{
		for (pal = 97; pal <= 122; pal++)
		{
			_putchar(pal);
		}
			_putchar('\n');
			l++;
	}
}
