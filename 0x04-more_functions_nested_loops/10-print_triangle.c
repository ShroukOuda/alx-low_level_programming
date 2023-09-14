#include "main.h"
/**
 * print_triangle - check the code.
 * @size: is an integer
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int cnt = size, i, j, k;

	if (cnt > 0)
	{
		for (i = 0; i < cnt; i++)
		{
			for (j = cnt - 1; j >= i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
