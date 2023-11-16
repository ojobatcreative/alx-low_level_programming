#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int lgt, m;

	lgt = 0;

	while (src[lgt] != '\0')
	{
		lgt++;
	}

	for (m = 0; m < lgt; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}
