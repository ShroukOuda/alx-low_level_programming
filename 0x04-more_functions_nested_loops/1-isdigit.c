#include "main.h"
/**
 * _isdigit - check the code.
 * @c: is integer
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int i = c;

	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
		return (0);
}
