#include "main.h"
/**
 * get_bit - check the code.
 * @n: it's n
 * @index: it's index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	while (n)
	{
		if (n == 0 && index == 0)
			return (0);
		if (i == index)
		{
			if ((n & 1) == 0)
				return (0);
			else
				return (1);
		}
		i++;
		n >>= 1;
	}
	return (-1);
}
