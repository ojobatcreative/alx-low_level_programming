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
int iy;
int jt;
iy = 0;
while (dest[iy] != '\0')
{
iy++;
}
jt = 0;
while (jt < n && src[jt] != '\0')
{
dest[iy] = src[jt];
iy++;
jt++;
}
dest[iy] = '\0';
return (dest);
}
