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
	int ti = 0;

	while (ti < n && src[ti] != '\0')
	{
		dest[ti] = src[ti];
		ti++;
	}
	while (ti < n)
	{
		dest[ti] = '\0';
		ti++;
	}

	return (dest);
}
