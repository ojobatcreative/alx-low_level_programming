#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char bat;
	int j, lgt, lgt1;

	lgt = 0;
	lgt1 = 0;

	while (s[lgt] != '\0')
	{
		lgt++;
	}

	lgt1 = lgt - 1;

	for (j = 0; j < lgt / 2; j++)
	{
		bat = s[j];
		s[j] = s[lgt1];
		s[lgt1--] = bat;
	}
}
