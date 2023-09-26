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
		if (*haystack == *needle)
		{
			return (needle);
		}
			haystack++;
	}
	if (*haystack == *needle)
		return (needle);
	else
		return (NULL);
}
