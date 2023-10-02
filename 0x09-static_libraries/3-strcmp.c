#include "main.h"
/**
 * _strcmp - check the code.
 * @s1: it's a ptr
 * @s2: it's a ptr
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag = 1, result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			flag = 0;
			break;
		}
		if (flag)
			result = 0;
	}
	return (result);
}
