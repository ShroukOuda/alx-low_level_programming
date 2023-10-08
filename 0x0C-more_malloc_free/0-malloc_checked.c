#include "main.h"
/**
 * malloc_checked - check the code.
 * @b: an unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
