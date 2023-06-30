#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int fi;
	int ti;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (fi = 0; n[fi] != '\0'; fi++)
	{
		for (ti = 0; ti < 10; ti++)
		{
			if (n[fi] == s1[ti])
			{
				n[fi] = s2[ti];
			}
		}
	}
	return (n);
}
