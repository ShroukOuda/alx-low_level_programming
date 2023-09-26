#include "main.h"
/**
 * _strpbrk - check the code.
 * @s: it's a ptr
 * @accept: it's a ptr
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		{
			return (s);
		}
		}
		s++;
	}
	return (NULL);
}
