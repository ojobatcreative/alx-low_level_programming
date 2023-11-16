#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int fi = 0, ti = 0;

	while (dest[fi] != '\0')
	{
		fi++;
	}
	while (ti < n && src[ti] != '\0')
	{
	dest[fi] = src[ti];
	fi++;
	ti++;
	}
	dest[fi] = '\0';
	return (dest);
}

