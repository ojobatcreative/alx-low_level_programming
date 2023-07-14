#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[ti] - s2[ti]
 */
int _strcmp(char *s1, char *s2)
{
	int ti = 0;

	while (s1[ti] != '\0' && s2[ti] != '\0')
	{
		if (s1[ti] != s2[ti])
		{
			return (s1[ti] - s2[ti]);
		}
		ti++;
	}
	return (0);
}
