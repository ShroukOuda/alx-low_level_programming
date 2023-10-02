#include "main.h"
/**
 * _memset - check the code.
 * @s: it's a ptr
 * @b: it's a char
 * @n: it's an int
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
