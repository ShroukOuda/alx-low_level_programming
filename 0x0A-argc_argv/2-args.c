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
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
