#include "main.h"
/**
 * Sqrt - check the code.
 * @v: it's an int
 * @n: it's an int
 * Return: Always 0.
 */
int Sqrt(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (Sqrt(n, v + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - check the code.
 * @n: it's an int
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (Sqrt(n, 1));
}
