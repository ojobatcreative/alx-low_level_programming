#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in UPPERcase and
 * then in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z';	 alphabet++)
	{
		putchar(alphabet);
	}
	alphabet = tolower(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z' alphabet++)
	{
		putchar(alphabet);
	}
		putchar = toupper(alphabet);
		putchar('\n');

		return (0);
	}
