#include "main.h"
/**
 * *_strcpy - check the code.
 * @dest: it's ptr
 * @src: it's ptr
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, i;

	while (src[n])
		n++;
	for (i = 0; i <= n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
