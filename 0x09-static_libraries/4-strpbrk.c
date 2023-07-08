#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int kic;

	while (*s)
	{
		for (kic = 0; accept[kic]; kic++)
		{
		if (*s == accept[kic])
		return (s);
		}
	s++;
	}

return (0);
}
