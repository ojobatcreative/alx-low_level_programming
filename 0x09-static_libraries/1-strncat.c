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
	int ice;
	int jac;

	ice = 0;
	while (dest[ice] != '\0')
	{
		ice++;
	}
	jac = 0;
	while (jac < n && src[jac] != '\0')
	{
	dest[ice] = src[jac];
	ice++;
	jac++;
	}
	dest[ice] = '\0';
	return (dest);
}
