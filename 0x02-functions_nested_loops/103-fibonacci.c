#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n1 = 1, n2 = 2, sum = 2, s = 0;

	for (i = 3; i < 40; i++)
	{
		if (sum % 2 == 0)
		{
			s += sum;
		}
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if (sum >= 4000000)
		{
			printf("\n");
			break;
		}
	}
}
