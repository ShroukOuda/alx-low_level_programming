#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - check the code.
 * @h: it's headr
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
