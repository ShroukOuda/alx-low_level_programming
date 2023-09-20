#include "main.h"
/**
 * _strncat- check the code.
 * @dest: it's a ptr
 * @src: it's a ptr
 * @n: it's an int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0, l2 = 0, i;

	while (dest[l1])
		l1++;
	while (src[l2])
		l2++;
	for (i = l1; (i < l1 + n) && (i < l1 + l2); i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
