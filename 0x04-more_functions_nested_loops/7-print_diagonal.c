#include "main.h"
/**
 * print_diagonal - check the code.
 * @n: is integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int cnt = n, i, j;

	if (cnt > 0)
	{
		for (i = 0; i < cnt; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
