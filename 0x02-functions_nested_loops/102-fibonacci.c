#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n1 = 1, n2 = 2, sum = 0;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1 || i == 2)
		{
			printf("%d, ", i);
		}
		else
			sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d, ", sum);
	}
	printf("\n");
	return (0);
}
