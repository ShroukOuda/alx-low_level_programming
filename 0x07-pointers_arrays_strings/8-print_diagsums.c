#include "main.h"
/**
 * print_diagsums - check the code.
 * @a: it's a ptr
 * @size: it's an int
 * Return: Always 0.
 */
void print_diagsums(long int *a, int size)
{
	long int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
	a += 3;
	}
	printf("%ld, %ld\n", s1, s2);
}
