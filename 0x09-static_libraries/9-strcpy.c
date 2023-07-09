#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int ls = 0;
int x = 0;
while (*(src + ls) != '\0')
{
ls++;
}
for ( ; x < ls ; x++)
{
dest[x] = src[x];
}
dest[ls] = '\0';
return (dest);
}
