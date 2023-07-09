#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int q, j;

	for (q = 0; s[q] != '\0'; q++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[q] == accept[j])
				return (&s[q]);
		}
	}
	return (0);
}
