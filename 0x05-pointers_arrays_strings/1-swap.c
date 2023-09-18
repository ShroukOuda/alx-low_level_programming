#include "main.h"
/**
 * swap_int - check the code.
 * @a: it's first ptr
 * @b: it's second ptr
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
