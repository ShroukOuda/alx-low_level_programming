#include "main.h"
/**
 * string_toupper - check the code.
 * @str: it's a ptr
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i, n = 0;

	while (str[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
