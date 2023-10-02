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
	if (argc > 1 && argc < 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (1);
}
