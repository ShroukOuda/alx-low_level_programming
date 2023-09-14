#include "main.h"
/**
 * print_line - check the code.
 * @n: is integer
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = n, j;

	if (i > 0)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
