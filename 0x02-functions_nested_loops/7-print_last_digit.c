#include "main.h"
/**
 * print_last_digit - check the code.
 * @n: last digit of a number.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	_putchar(digit + 48);
	return (digit);
}
