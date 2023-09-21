#include "main.h"
/**
 * cap_string - check the code.
 * @str: it's a ptr
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int n = 0, i;

	while (str[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '?' ||
				str[i] == '"' || str[i] == '!' || str[i] == ';' ||
				str[i] == '\n' || str[i] == '\t' || str[i] == '.'
				 || str[i] == '(' || str[i] == ')' || str[i] == '{'
				  || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
