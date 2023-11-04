#include "main.h"
/**
 * flip_bits - check the code
 * @n: it's an int
 * @m: it's an int
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		cnt += xor & 1;
		xor >>= 1;
	}
	return (cnt);
}
