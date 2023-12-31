#include "function_pointers.h"
/**
 * int_index - check the code.
 * @array: it's an int
 * @size: it's an int
 * @cmp: it's a fptr
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		return (i);
	}
	return (-1);
}
