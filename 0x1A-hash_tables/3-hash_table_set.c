#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element
 * @ht: Points to the hash table.
 * @key: The key to add - can't be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure return 0, otherwise return 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, ti;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (ti = index; ht->array[ti]; ti++)
	{
		if (strcmp(ht->array[ti]->key, key) == 0)
		{
			free(ht->array[ti]->value);
			ht->array[ti]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
