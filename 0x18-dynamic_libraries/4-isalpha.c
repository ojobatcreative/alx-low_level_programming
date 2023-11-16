#include "main.h"

/**
 * _isalpha - function that checks for alphabet character
 * @c: is the character to be checked
 * Return: 1 for alphabet or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
