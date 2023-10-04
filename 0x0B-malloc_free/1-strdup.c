#include "main.h"
/**
 * _strdup - check the code.
 * @str: it's str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, n = 0;

	while (str[n])
		n++;
	ptr = malloc(n);
	if (ptr == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}
