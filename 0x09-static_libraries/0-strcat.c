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
	int ji = 0;

	while (dest[fi] != '\0')
	{
		fi++;
	}
	while (src[ji] != '\0')
	{
		dest[fi] = src[ji];
		fi++;
		ji++;
	}

	dest[fi] = '\0';
	return (dest);
}
