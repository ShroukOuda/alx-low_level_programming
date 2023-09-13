#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n = 1, m = 2, sum = 0, n1, n2, m1, m2, s = 0, c = 0;

	printf("%ld, %ld, ", n, m);
	for (i = 3; i <= 91; i++)
	{
		sum = n + m;
		n1 = n2;
		n2 = sum;
		printf("%ld, ", sum);
	}
	n1 = n / 1000000000;
	n2 = n % 1000000000;
	m1 = m / 1000000000;
	m2 = m % 1000000000;
	for (i = 92; i < 99; i++)
	{
		s = n1 + m1;
		n1 = m1;
		m1 = s;
		printf("%ld", s);
		c = n2 + m2;
		n2 = m2;
		m2 = c;
		printf("%ld", c);
		if (i == 98)
		{
			printf("\n");
		}
		else
			printf(", ");
	}

	return (0);
}
