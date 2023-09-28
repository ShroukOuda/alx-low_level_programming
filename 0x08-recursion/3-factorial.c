#include "main.h"
/**
 * factorial - check the code.
 * @n: it 's an int
 * Return: Always 0.
 */
int factorial(int n)
{
	int result = 1;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result *= n * factorial(n - 1);
	}
	return (result);
}
