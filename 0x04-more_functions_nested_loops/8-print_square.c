#include "main.h"
/**
 * print_square - check the code.
 * @size: is an integer
 * Return: Always 0.
 */
void print_square(int size)
{
	int cnt = size, i, j;

	if (cnt > 0)
	{
		for (i = 0; i < cnt; i++)
		{
			for (j = 0; j < cnt; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
