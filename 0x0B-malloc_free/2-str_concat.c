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
	char *p1;

	while (s1[n])
		n++;
	while (s2[m])
		m++;
	p1 = malloc(n + m + 1);
	if (p1 == 0)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		p1[i] = s1[i];
	}
	for (i = n; i < (n + m); i++)
	{
		p1[i] = *s2;
		s2++;
	}
	return (p1);
	free(p1);
}
