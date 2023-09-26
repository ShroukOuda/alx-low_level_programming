#include "main.h"
/**
 * _strstr - check the code.
 * @haystack: it's a ptr
 * @needle: it's a ptr
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle, *h = haystack;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
			haystack++;
	}
		return (NULL);
}
