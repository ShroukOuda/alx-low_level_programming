#include "main.h"
/**
 * *_strcat - check the code.
 * @dest: it's ptr
 * @src: it's ptr
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0, l2 = 0, i;

	while (dest[l1])
	{
		l1++;
	}
	while (src[l2])
	{
		l2++;
	}
	for (i = l1; i < l1 + l2; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
