#include "main.h"

/**
 * main - print_alphabet
 * Description: A function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	char pal;

	for (pal = 97; pal <= 122; pal++)
	{
		_putchar(pal);
	}
	_putchar('\n');
}
