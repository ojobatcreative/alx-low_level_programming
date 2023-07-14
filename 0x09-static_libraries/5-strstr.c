#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *r = needle;

		while (*q == *r && *r != '\0')
		{
			q++;
			r++;
		}

		if (*r == '\0')
			return (haystack);
	}

	return (0);
}
