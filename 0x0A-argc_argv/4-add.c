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
	int i, sum = 0;
	char *c;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c < 48 || *c > 57)
			{
				return (printf("Error\n"), 1);
			}
		}
				sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
