#include "hash_tables.h"

/**
 * hash_djb2 - Function that implement the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ct;

	hash = 5381;
	while ((ct = *str++))
		hash = ((hash << 5) + hash) + ct;

	return (hash);
}
