#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * @c: Value of c
 * Return: Always 0
 */
int _putchar(char str);
void _puts(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
