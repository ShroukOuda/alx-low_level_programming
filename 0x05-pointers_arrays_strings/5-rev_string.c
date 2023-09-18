#include "main.h"
/**
 * rev_string - check the code.
 * @s: it's ptr
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int n = 0, i;
	char c;

	while (s[n])
		n++;
	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = c;
	}
}

