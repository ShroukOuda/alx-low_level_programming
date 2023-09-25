#include "main.h"
/**
 * print_diagsums - check the code.
 * @a: it's a ptr
 * @size: it's an int
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
	}
	for (j = size - 1; j >= 0; j--)
	{
		s2 += a[j * size + (size - 1 - j)];
				}
	printf("%d, %d\n", s1, s2);
}
