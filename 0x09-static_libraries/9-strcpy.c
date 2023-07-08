#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int lt = 0;
	int xi = 0;

	while (*(src + lt) != '\0')
	{
		lt++;
	}
	for ( ; xi < lt ; xi++)
	{
		dest[xi] = src[xi];
	}
	dest[lt] = '\0';
	return (dest);
}
