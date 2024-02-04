#include "hash_tables.h"
/**
 * free_node - check the code
 * @node:--
 * Return: Always EXIT_SUCCESS.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - check the code
 * @ht:---
 * @key:---
 * @value:---
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *current, *temp;

	if (ht == NULL || key == NULL || !strcmp(key, ""))
		return (0);
	index = key_index((const unsigned char*)key, ht->size);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup((char*)key);
	newnode->value = strdup((char*)value);
	newnode->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		current = ht->array[index];
		if (!strcmp(key, current->key))
		{
			newnode->next = current->next;
			ht->array[index] = newnode;
			free_node(current);
			return (1);
		}
		while (current->next && strcmp(key, current->next->key))
			current = current->next;
		if (!strcmp(key, current->next->key))
		{
			newnode->next = current->next->next;
			temp = current->next;
			current->next = newnode;
			free_node(temp);
		}
		else
		{
			current->next = newnode;
			newnode->next = NULL;
		}
	}
	return (1);
}
