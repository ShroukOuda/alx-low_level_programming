#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code.
 * @argc: it's argc
 * @argv: it's argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, flag;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				flag = 0;
				break;
			}
			else
			{
				sum += atoi(argv[i]);
				flag = 1;
			}
		}
	if (flag)
	{
	printf("%d\n", sum);
	}
	else
		printf("Error\n");
	}
	else
		printf("%d\n", 0);
	return (1);
}
