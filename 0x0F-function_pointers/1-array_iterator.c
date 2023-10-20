#include "function_pointers.h"
/**
 * array_iterator - check the code.
 * @array: it's an int
 * @size: it's a size_t
 * @action: it's a fptr
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
