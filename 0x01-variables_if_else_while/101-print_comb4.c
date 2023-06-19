#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int qtrz1;
        int qtrz2;
	int qtrz3;

	for (qtrz1 = 48; qtrz1 < 58; qtrz1++)
	{
		for (qtrz2 = 49; qtrz2 < 58; qtrz2++)
		{
			for (qtrz3 = 50; qtrz3 < 58; qtrz3++)
			{
				if (qtrz3 > qtrz2 && qtrz2 > qtrz1)

				{
					putchar(qtrz1);

					putchar(qtrz2);

					putchar(qtrz3);

					if (qtrz1 != 55 || qtrz2 != 56)

					{
						putchar(',');

						putchar(' ');
					}

				}

			}

		}

	}

	putchar('\n');

	return (0);
}
