#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long i, n1 = 1, n2 = 2, sum = 0;

	printf("%lld, %lld, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
			sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lld", sum);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
