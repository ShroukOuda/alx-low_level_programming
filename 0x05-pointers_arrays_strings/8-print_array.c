#include "main.h"
/**
 * print_array - check the code.
 * @a: it's ptr
 * @n: it's int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", *a);
		a++;
	}
	putchar('\n');
}
