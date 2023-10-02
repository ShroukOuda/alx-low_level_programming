#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code.
 * @argc: it's argc
 * @argv: it's argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (1);
}
