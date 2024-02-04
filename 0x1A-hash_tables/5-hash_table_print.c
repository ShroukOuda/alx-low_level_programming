#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht:----
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current)
		{
			while (current)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
