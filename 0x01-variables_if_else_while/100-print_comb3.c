#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int qtrz1, qtrz2;

	for (qtrz1 = '0'; qtrz1 <= '9'; qtrz1++)
	{
		for (qtrz2 = qtrz1; qtrz2 <= '9'; qtrz2++)
		{
			if (qtrz1 != qtrz2)
			{
				putchar(qtrz1);
				putchar(qtrz2);

				if (qtrz1 != '8' || qtrz2 != '9')

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
