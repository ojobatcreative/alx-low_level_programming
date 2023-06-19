#include <stdio.h>
/**
 * main - prints the alphabet in lowercase letters in reverse order
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char albet;

	for (albet = 'z'; albet >= 'a'; albet--)
	
	{
		putchar(albet);
	}

	putchar('\n');

	return (0);
}
