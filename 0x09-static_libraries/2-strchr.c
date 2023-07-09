#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int iy = 0;
for (; s[iy] >= '\0'; iy++)
{
if (s[iy] == c)
return (&s[iy]);
}
return (0);
}
