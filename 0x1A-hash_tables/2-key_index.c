#include "hash_tables.h"
/**
 * key_index- check the code
 * @key:---
 * @size:----
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	res = hash_djb2(key) % size;
	return (res);
}
