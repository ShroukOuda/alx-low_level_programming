#include "main.h"
/**
 * _strchr - check the code.
 * @s: it's a ptr
 * @c: it's a char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
