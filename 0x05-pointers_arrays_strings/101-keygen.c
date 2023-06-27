#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int crack_it;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		crack_it = (rand() % 125) + 1;
		printf("%c", crack_it);
		total -= crack_it;
	}
	printf("%c", total);

	return (0);
}
