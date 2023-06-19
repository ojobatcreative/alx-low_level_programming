#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase letters
 * followed by UPPERCASE letters and a new line
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
	albet = tolower(albet);
	for (albet = 'A'; albet <= 'Z'; albet++)
	{
	putchar(albet);
	}
	albet = toupper(albet);
	putchar('\n');

	return (0);
}
