#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int lgt = 0;
	int j;

	while (*s != '\0')
	{
		lgt++;
		s++;
	}
	s--;
	for (j = lgt; j > 0; j--)
	{
		_putchar(*s);
		j--;
	}
	_putchar('\n);
}
