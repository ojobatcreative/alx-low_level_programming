#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arg. of your program with newline
 * @ac: arg. count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *aq, *rept;
	int p, q, tot;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0, tot = 0; p < ac; p++)
	{
		for (q = 0; *(*(av + p) + q) != '\0'; q++, tot++)
			;
		tot++;
	}
	tot++;

	aq = malloc(tot * sizeof(char));
	if (aq == NULL)
		return (NULL);

	rept = aq;
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			*aq = av[p][q];
			aq++;
		}
		*aq = '\n';
		aq++;
	}

	return (rept);
}
