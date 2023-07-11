#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a1;
	int i, j, t, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a1 == NULL)
		return (NULL);

	for (t = 0, d = 0; t < (i + j + 1); t++)
	{
		if (t < i)
			a1[t] = s1[t];
		else
			a1[c] = s2[d++];
	}

	return (a1);
}
