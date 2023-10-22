#include "main.h"
/**
 * str_concat - check the code.
 * @s1: it's a ptr
 * @s2: it's a ptr
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, m = 0, k = 0;
	char *result;

	while (s1[n])
		n++;
	while (s2[m])
		m++;
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	result = malloc(sizeof(char) * (n + m + 1));
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		result[i] = s2[k];
		i++;
		k++;
	}
	result[i] = '\0';
	return (result);
}
