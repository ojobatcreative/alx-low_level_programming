#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num1, num2, num3;

	for (num1 = 72; num1 < 82; num1++)
	{
		for (num2 = 73; num2 < 82; num2++)
		{
			for (num3 = 74; num3 < 82; num3++)
			{
				if (num3 > num2 && num2 > num1)

				{
					putchar(num1);

					putchar(num2);

					putchar(num3);

					if (num1 != 79 || num2 != 80)

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
