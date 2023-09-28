#include "main.h"
/**
 * _pow_recursion - check the code.
 * @x: it's an int
 * @y: it's an int
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x *= _pow_recursion(x, y - 1);
	}
	return (x);
}
