#include "main.h"
/**
 * puts2 - check the code.
 * @str: it's ptr
 * Return: Always 0.
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] !=  '\0'; n++)
	{
		if (n % 2 == 0)
		putchar(str[n]);
	}
	putchar('\n');
}
