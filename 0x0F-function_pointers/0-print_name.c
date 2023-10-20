#include "function_pointers.h"
/**
 * print_name - check the code.
 * @name: it's a string
 * @f: it's a fptr
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
