#include "main.h"
/**
 * _atoi - check the code.
 * @s: it's ptr
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int n = 0, i, r = 1;

	while (s[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '+')
		{
			r = r * 1;
		}
		else if (s[i] == '-')
		{
			r = r * -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (r < 0)
				putchar('-');
			while (s[i] >= 48 && s[i] <= 57)
			{
			putchar(s[i]);
			i++;
			}
			break;
		}
		else
		{
			return (0);
		}
	}

}


