#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long n;

	scanf("%lld", &n);
	if (n > 0)
	{
		printf("%lld is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%lld is negative\n", n);
	}
	else
	{
		printf("%lld is zero\n", n);
	}
	return (0);
}
