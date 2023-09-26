#include "main.h"
/**
 * _strstr - check the code.
 * @haystack: it's a ptr
 * @needle: it's a ptr
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n = needle;

	while (*haystack != '\0')
	{
		while (*haystack == *n && *n != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
		{
			return (needle);
		}
			haystack++;
	}
		return (NULL);
}
