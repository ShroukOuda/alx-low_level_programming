#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - check the code.
 * @h: it's a head
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t cnt = 0;

	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}
