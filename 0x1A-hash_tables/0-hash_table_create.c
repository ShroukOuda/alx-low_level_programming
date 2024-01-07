#include "hash_tables.h"
/**
 * hash_table_create - check the code.
 * @size: it's a size
 * Return: Always 0.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newnode;

	newnode = malloc(sizeof(hash_table_t));
	if (newnode == NULL)
		return (NULL);
	newnode->size = size;
	newnode->array = malloc(sizeof(hash_table_t *) * size);
	if (newnode->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newnode->array[i] = NULL;
	}
	return (newnode);
}
