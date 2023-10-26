#include "main.h"
/**
* binary - check the code.
* @n: it's n
* Return: Always 0.
*/
void binary(unsigned long int n)
{
	if (n == 0)
		return;
	binary(n >> 1);
	if ((n & 1) == 0)
		putchar('0');
	else
		putchar('1');
}
/**
* print_binary - check the code.
* @n: it's n
* Return: Always 0.
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		binary(n);
}
