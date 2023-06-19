#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting at 0
 * followed by a new line, using the putchar() function
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ty;

	for (ty = 48; ty < 58; ty++)

	{
		putchar(ty);
	}

	putchar('\n');

	return (0);
}
