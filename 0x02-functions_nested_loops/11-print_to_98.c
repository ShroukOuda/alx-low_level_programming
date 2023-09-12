#include "main.h"
/**
 * print_to_98 - check the code.
 * @n: prints all natural numbers from n to 98.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int num = n, i;

	if (num > 98)
	{
		for (i = num; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (num < 98)
	{
		for (i = num; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
