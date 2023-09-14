#include "main.h"
/**
* print_number - check the code.
* @n: is an integer
* Return: Always 0.
*/
void print_number(int n)
{
	int num = n;

	while (num > 0)
	{
	if (num > 9 && num < 100)
	{
_putchar((num / 10) + 48);
	}
	else if (num > 99 && num < 1000)
	{
		_putchar((num / 100) + 48);
	}
	else if (num > 999 && num < 10000)
	{
		_putchar((num / 1000) + 48);
	}
	else
	{
		_putchar((num % 10) + 48);
	}
	num = num / 10;
	}
}
