#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    int length = string_length(s);
    return is_palindrome_recursive(s, 0, length - 1);
}

/**
 * string_length - Calculates the length of a string recursively.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + string_length(s + 1);
}

/**
 * is_palindrome_recursive - Recursive helper function to check if a string is a palindrome.
 * @s: The string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome_recursive(s, start + 1, end - 1);
}
