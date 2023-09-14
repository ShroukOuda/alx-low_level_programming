#include <stdio.h>
#include <math.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143, i, largest;

	while (num % 2 == 0)
	{
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
		{
			num /= i;
			largest = i;
		}
	}
	if (num > 2)
	{
		largest = num;
	}
	printf("%ld", largest);
	printf("\n");
	return (0);
}
