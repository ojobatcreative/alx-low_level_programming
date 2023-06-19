#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char a16m;

	for (a16m = '0'; a16m <= '9'; a16m++)
	{
	putchar(a16m);
	}
	for (a16m = 'a'; a16m <= 'f'; a16m++)
	{
	putchar(a16m);
	}

	putchar('\n');

	return (0);
}
