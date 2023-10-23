#include "lists.h"
/**
 * print_listint - check the code.
 * @h: it's a head
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t cnt = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
