#include "lists.h"
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
		printf("[%u]%s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
return (i);
}
