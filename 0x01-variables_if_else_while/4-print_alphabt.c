#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the aphabets in lowercase except for 'e' and 'q'
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	if (albet != 'e' && albet != 'q')
	{
		putchar(albet);
	}
	albet = tolower(albet);
	putchar('\n');

	return (0);
}
