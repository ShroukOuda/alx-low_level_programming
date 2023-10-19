#include "lists.h"
/**
 * _strlen - check the code.
 * @str: it's a string
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
	{
		return (0);
	}
	while (str[i])
		i++;
	return (i);
}
/**
 * print_list - check the code.
 * @h: it's const list_t
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] ", _strlen(h->str));
		if (h->str == NULL)
			printf("(nil)");
		else
			printf("%s", h->str);
		putchar('\n');
		h = h->next;
		i++;
	}
return (i);
}
