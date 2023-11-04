#include <stdio.h>
#include "main.h"
/**
 * set_bit - check the code
 * @n: it's a num
 * @index:it's an index
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
