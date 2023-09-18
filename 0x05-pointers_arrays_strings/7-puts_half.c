#include "main.h"
/**
 * puts_half - check the code.
 * @str: it's ptr
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n, m = 0, k;

	while (str[m])
		m++;
	k = (m - 1) / 2;
	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 != 0)
		{
			k++;
			putchar(str[k]);
		}
	}
	putchar('\n');
}
