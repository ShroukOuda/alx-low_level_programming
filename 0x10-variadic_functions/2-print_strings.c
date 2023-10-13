#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - check the code.
 * @separator: it's a string
 * @n: it's a count
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
	if (separator != NULL && i != n)
	{
	printf("%s", separator);
	}
	}
va_end(args);
printf("\n");
}
