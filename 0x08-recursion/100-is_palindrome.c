#include "main.h"
/**
* _strlen_recursion - check the code.
* @s: it's a ptr
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
int i = 0;

if (*s != '\0')
{
i += _strlen_recursion(s + 1) + 1;
}
return (i);
}
/**
* pal - check the code.
* @s: it's a ptr
* @i: it's an int
* @l: it's an int
* Return: Always 0.
*/
int pal(char *s, int i, int l)
{
	if (s[i] != s[l - 1 - i])
	{
		return (0);
	}
	else if (i == ((l - 1) / 2))
	{
		return (1);
	}
		return (pal(s, i + 1, l));
}
/**
* is_palindrome - check the code.
* @s: it's a ptr
* Return: Always 0.
*/
int is_palindrome(char *s)
{
	return (pal(s, 0, _strlen_recursion(s)));
}
