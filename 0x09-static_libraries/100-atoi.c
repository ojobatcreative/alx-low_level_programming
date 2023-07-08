#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, ice = 0;
	unsigned int res = 0;

	while (!(s[ice] <= '9' && s[ice] >= '0') && s[ice] != '\0')
	{
		if (s[ice] == '-')
			sign *= -1;
		ice++;
	}
	while (s[ice] <= '9' && (s[ice] >= '0' && s[ice] != '\0'))
	{
		res = (res * 10) + (s[ice] - '0');
		ice++;
	}
	res *= sign;
	return (res);
}
