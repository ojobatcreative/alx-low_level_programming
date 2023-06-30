#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int fi = 0;

	while (n[fi] != '\0')
	{
		if (n[fi] >= 'a' && n[fi] <= 'z')
			n[fi] = n[fi] - 32;
		fi++;
	}
	return (n);
}
