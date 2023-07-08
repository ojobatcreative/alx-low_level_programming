#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nik = 0;
	int rik;

	while (*s)
	{
		for (rik = 0; accept[rik]; rik++)
		{
			if (*s == accept[rik])
			{
				nik++;
				break;
			}
			else if (accept[rik + 1] == '\0')
				return (nik);
		}
		s++;
	}
	return (nik);
}
