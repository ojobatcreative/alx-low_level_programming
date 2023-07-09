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
int iy;
int jt;
iy = 0;
while (dest[iy] != '\0')
{
iy++;
}
jt = 0;
while (src[jt] != '\0')
{
dest[iy] = src[jt];
iy++;
jt++;
}                      
dest[iy] = '\0';
return (dest);
}
