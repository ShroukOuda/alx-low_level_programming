#include "main.h"
/**
 * _pow - check the code.
 * @n: it's a n
 * @p: it's a p
 * Return: Always 0.
 */
unsigned int _pow(unsigned int n, unsigned int p)
{
	unsigned int i, temp, r = 1;

	for (i = 1; i <= p; i++)
	{
		temp = n;
		r *= temp;
	}
	return (r);
}
/**
 * binary_to_uint - check the code.
 * @b: it's a string
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, len = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	len--;
	while (len)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
		{
			decimal += _pow(2, i);
		}
		i++;
		len--;
	}
		if (b[len] == '1')
			decimal += _pow(2, i);
	return (decimal);
}
