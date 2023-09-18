#include "main.h"
/**
 * _strlen - check the code.
 * @s: it's ptr
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *s != '\0'; s++)
	{
		cnt++;
	}
	return (cnt);
}

