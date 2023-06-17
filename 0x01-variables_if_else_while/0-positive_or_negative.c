#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));

    // To generate a random number
    n = rand();

    // To print the randomly generated number
    printf("The number is: %d\n", n);

    // Check if the number is positive or negative and print the result
    if (n > 0) {
        printf("is positive.\n");
    } else if (n == 0) {
        printf("is zero.\n");
    } else {
        printf("is negative.\n");
    }

    return (0);
}
