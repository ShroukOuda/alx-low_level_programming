#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - check the code.
 * @format: it's a const
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s = "";
	char *str;
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case'i':
					printf("%s%d", s, va_arg(args, int));
					break;
				case'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				case's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
