#include "main.h"
/**
 * print_sign - check the code.
 * @n: is number
 * Return: Always 0.
 */
int print_sign(int n)
{
	int i = n;

	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
