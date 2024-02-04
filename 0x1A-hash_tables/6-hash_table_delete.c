#include "hash_tables.h"
/**
 * hash_table_delete - check the code
 * @ht:---
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				current = ht->array[i]->next;
				temp = ht->array[i];
				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[i] = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}
