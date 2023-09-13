#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n = 1, m = 2, n1, n2, m1, m2;

	printf("%ld, %ld, ", n, m);
	for (i = 3; i <= 91; i++)
	{
		n = n + m;
		m = n - m;
		printf("%ld, ", n);
	}
	n1 = n / 1000000000;
	n2 = n % 1000000000;
	m1 = m / 1000000000;
	m2 = m % 1000000000;
	for (i = 92; i < 99; i++)
	{
		printf("%ld", n1);
		n1 = n1 + m1;
		m1 = n1 - m1;
		printf("%ld", n2);
		n2 = n2 + m2;
		m2 = n2 - m2;
		if (i == 98)
		{
			printf("\n");
		}
		else
			printf(", ");
	}

	return (0);
}
