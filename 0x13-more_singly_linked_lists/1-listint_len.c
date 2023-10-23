#include "lists.h"
/**
 * listint_len - check the code.
 * @h: it's a head
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t cnt = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
