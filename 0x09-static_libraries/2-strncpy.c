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
int jt;
jt = 0;
while (jt < n && src[jt] != '\0')
{
dest[jt] = src[jt];
jt++;
}
while (jt < n)
{
dest[jt] = '\0';
jt++;
}
return (dest);
}
