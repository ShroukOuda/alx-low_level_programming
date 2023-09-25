#include "main.h"
/**
 * _memcpy - check the code.
 * @dest: it's a ptr
 * @src: it's aptr
 * @n: it's an int
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
