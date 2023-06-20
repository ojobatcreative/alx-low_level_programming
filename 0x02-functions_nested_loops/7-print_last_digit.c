#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the number to be treated
 * Return: value of the last digit of number
 */

int print_last_digit(int n)

{
	int ldig;

	ldig = n % 10;
	if (ldig < 0)
	{
		ldig = ldig * -1;
	}
	_putchar(ldig + 48);
	return (ldig);
}
