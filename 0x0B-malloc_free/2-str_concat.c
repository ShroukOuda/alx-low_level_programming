#include "main.h"
/**
 * str_concat - check the code.
 * @s1: it's a ptr
 * @s2: it's a ptr
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, n = 0, m = 0;
	char *p1, *p2, *result;

	while (s1[n])
		n++;
	while (s2[m])
		m++;
	p1 = malloc(n + 1);
	for (i = 0; i < n; i++)
	{
		p1[i] = s1[i];
	}
	p2 = malloc(m + 1);
	for (i = 0; i < m; i++)
	{
		p2[i] = s2[i];
	}
	result = malloc(n + m + 1);
	for (i = 0; i < n; i++)
	{
		result[i] = p1[i];
	}
	for (i = n; i < (n + m); i++)
	{
		result[i] = *p2;
		p2++;
	}
	if (p1 == 0 && p2 == 0)
	{
		return (NULL);
	}
	else if (p1 == 0 && p2 != 0)
	{
		return (p2);
	}
	else if (p1 != 0 && p2 == 0)
	{
		return (p1);
	}
	return (result);
}
