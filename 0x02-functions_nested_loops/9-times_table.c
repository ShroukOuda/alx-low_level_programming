#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				if (result > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (result > 9)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(result + 48);
			}
		}
		_putchar('\n');
	}
}
