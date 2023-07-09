#include "main.h"
/**
 *_memcpy - a function that copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int rt = 0;
int iy = n;
for (; rt < iy; rt++)
{
dest[rt] = src[rt];
n--;
}
return (dest);
}
