#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int mc;

		while (*s)
		{
			for (mc = 0; accept[mc]; mc++)
			{
			if (*s == accept[mc])
			return (s);
			}
		s++;
		}

	return (NULL);
}
