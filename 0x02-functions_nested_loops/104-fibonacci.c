#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n1 = 1, n2 = 2, sum = 0;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d", sum);
		if (i == 98)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
