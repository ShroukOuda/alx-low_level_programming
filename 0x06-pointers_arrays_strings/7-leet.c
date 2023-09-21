#include "main.h"
/**
 * leet - check the code.
 * @s: it's a ptr
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, n = 0;

	while (s[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
