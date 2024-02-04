#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht:----
 * @key:---
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || !strcmp(key, ""))
		return (NULL);
	index = key_index((const unsigned char*) key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	while (current && strcmp(key, current->key))
		current = current->next;
	if (current == NULL)
		return (NULL);
	return (current->value);
}
