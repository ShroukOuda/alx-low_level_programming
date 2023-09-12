#include "main.h"
/**
 * print_times_table - check the code.
 * @n: it is integer
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int num = n, i, j, mul;

	if (num <= 15 && num >= 0)
	{
		for (i = 0; i <= num; i++)
		{
			for (j = 0; j <= num; j++)
			{
				mul = i * j;
				if (j != 0)
				{
					printf(", ");
					if (mul >= 10 && mul <= 99)
					{
						printf(" ");
					}
					else if (mul < 10)
					{
						printf(" ");
						printf(" ");
					}
				}
				printf("%d", mul);
			}
			printf("\n");
		}
	}
}
