#include "main.h"
/**
 * _isupper - check the code.
 * @c: is integer
 * Return: Always 0.
 */
int _isupper(int c)
{
	int i = c;

	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else
		return (0);
}
