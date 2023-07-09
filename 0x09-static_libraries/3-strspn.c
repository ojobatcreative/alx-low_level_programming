#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int rt;
while (*s)
{
for (rt = 0; accept[rt]; rt++)
{
if (*s == accept[rt])
{
n++;
break;
}
else if (accept[rt + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
