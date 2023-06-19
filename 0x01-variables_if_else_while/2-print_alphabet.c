#include <stdio.h>
/**
 * main - prints the alphabets in lowercase letters
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
	putchar(albet);
	}

	putchar('\n');

	return (0);
}
