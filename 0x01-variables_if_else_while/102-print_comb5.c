#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int qtrz1, qtrz2;

	for (qtrz1 = 0; qtrz1 < 100; qtrz1++)

	{
		for (qtrz2 = 0; qtrz2 < 100; qtrz2++)
		{
			if (qtrz1 < qtrz2)
			{
				putchar((qtrz1 / 10) + 48);
				putchar((qtrz1 % 10) + 48);
				putchar(' ');
				putchar((qtrz2 / 10) + 48);
				putchar((qtrz2 % 10) + 48);
				if (qtrz1 != 98 || qtrz2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);

}

