#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int fi = 0;
	int ti = 0;

	while (dest[fi] != '\0')
	{
		fi++;
	}
	while (src[ti] != '\0')
	{
		dest[fi] = src[ti];
		fi++;
		ti++;
	}

	dest[fi] = '\0';
	return (dest);
}
