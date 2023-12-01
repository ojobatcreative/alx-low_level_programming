#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *zt;
	unsigned long int q;

	zt = malloc(sizeof(hash_table_t));
	if (zt == NULL)
		return (NULL);

	zt->size = size;
	zt->array = malloc(sizeof(hash_node_t *) * size);
	if (zt->array == NULL)
		return (NULL);
	for (q = 0; q < size; q++)
		zt->array[q] = NULL;

	return (zt);
}
