#include "main.h"
/**
 * _isalpha - check the code.
 * @c: is a letter, lowercase or uppercase
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int i = c;

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}
	else
		return (0);
}

