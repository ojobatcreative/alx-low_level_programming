#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int qtrz;

	for (qtrz = '0'; qtrz <= '9'; qtrz++)
	
	{
	putchar(qtrz);

	if (qtrz != '9')
		
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
