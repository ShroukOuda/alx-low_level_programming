#include "main.h"
/**
 * print_rev - check the code.
 * @s: it's ptr
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}
	while (n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
