#include "main.h"
/**
* _atoi - check the code.
* @s: it's ptr
* Return: Always 0.
*/
int _atoi(char *s)
{
	int n = 0, i, r = 1, f = 0, num = 0, digit;

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
			f = 1;
			while (s[i] >= 48 && s[i] <= 57)
			{
				digit = s[i] - 48;
				num = num * 10 + digit;
			i++;
			}
			break;
		}
	}
	if (f == 0)
	       return (0);
	else 
		return (r * num);
}
