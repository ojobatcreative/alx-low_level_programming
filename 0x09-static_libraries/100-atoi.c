#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int sign = 1, iy = 0;
unsigned int res = 0;
while (!(s[iy] <= '9' && s[iy] >= '0') && s[iy] != '\0')
{
if (s[iy] == '-')
sign *= -1;
iy++;
}
while (s[iy] <= '9' && (s[iy] >= '0' && s[iy] != '\0'))
{
res = (res * 10) + (s[iy] - '0');
iy++;
}
res *= sign;
return (res);
}
