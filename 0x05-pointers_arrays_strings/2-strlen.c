#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int lgt = 0;

    if (s != NULL)
    {
        while (*s != '\0')
        {
            lgt++;
            s++;
        }
    }

    return lgt;
}

