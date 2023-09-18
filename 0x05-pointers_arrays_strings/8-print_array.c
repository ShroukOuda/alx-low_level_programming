#include "main.h"
/**
 * print_array - check the code.
 * @a: it's ptr
 * @n: it's int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	while (n--)
	{
		printf("%d", *a++);
		if (n >= 1)
			printf(", ");
	}
	putchar('\n');
}
