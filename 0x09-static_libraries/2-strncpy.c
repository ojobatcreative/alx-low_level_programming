#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jac = 0;

	while (jac < n && src[jac] != '\0')
	{
		dest[jac] = src[jac];
		jac++;
	}
	while (jac < n)
	{
		dest[jac] = '\0';
		jac++;
	}

	return (dest);
}
