#include "main.h"
/**
* Prime - check the code.
* @n: it's an int
* @i: it's an int
* Return: Always 0.
*/
int Prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
else
return (Prime(n, i - 1));
}
/**
* is_prime_number - check the code.
* @n: it's an int
* Return: Always 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (Prime(n, n - 1));
}
