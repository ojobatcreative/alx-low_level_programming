#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ice = 0;

	for (; s[ice] >= '\0'; ice++)
	{
		if (s[ice] == c)
			return (&s[ice]);
	}
	return (0);
}
