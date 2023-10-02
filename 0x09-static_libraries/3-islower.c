#include "main.h"
/**
 * _islower - check the code.
 *@c: is the char to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
		return (0);
}
