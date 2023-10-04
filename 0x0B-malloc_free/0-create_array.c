#include "main.h"
/**
 * create_array - check the code.
 * @size: it's an unsigned int
 * @c: it's a char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

		ptr = malloc(size);
		if (size == 0 || ptr == 0)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
}
