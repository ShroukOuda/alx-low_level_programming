#include "main.h"
/**
 * puts2 - check the code.
 * @str: it's ptr
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
