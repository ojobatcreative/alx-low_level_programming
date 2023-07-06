#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    int length = 0;
    int i = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    while (i < length / 2)
    {
        if (s[i] != s[length - 1 - i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}
