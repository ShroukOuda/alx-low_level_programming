#include "main.h"
/**
 * _strncpy - check the code.
 * @dest: it's a ptr
 * @src: it's a ptr
 * @n: it's an int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
