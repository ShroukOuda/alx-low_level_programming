#include "main.h"
/**
* cap_string - check the code.
* @str: it's a ptr
* Return: Always 0.
*/
char *cap_string(char *str)
{
	int n = 0, i, flag;

	while (str[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '?' ||
				str[i] == ' ' || str[i] == ',' ||
				str[i] == ';' || str[i] == '"' || str[i] == '.'
				|| str[i] == '!' || str[i] == '(' || str[i] == ')'
				|| str[i] == '}' || str[i] == '{')
		{
			flag = 1;
		}
		else if (str[i] >= 97 && str[i] <= 122 && flag == 1)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			flag = 0;
		}
	}
	return (str);
}
