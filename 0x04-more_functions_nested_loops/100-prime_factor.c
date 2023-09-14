#include <stdio.h>
#include <math.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143, i;

	while (num % 2 == 0)
	{
		printf("%d", 2);
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
		{
			printf("%ld", i);
			num /= i;
		}
	}
	if (num > 2)
	{
		printf("%ld", num);
	}
	printf("\n");
	return (0);
}
