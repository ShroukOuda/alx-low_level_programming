#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code.
 * @n: prints all natural numbers from n to 98.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int num = n, i;

	if (num >= 98)
	{
		for (i = num; i >= 98; i--)
		{
		printf("%d", i);
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		}
	}
	else
	{
		for (i = num; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
