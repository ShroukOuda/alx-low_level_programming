#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - check the code.
 * @h: it's a head
 * @idx: it's an index
 * @n: it's an int
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;
	unsigned int cnt = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	while (temp)
	{
		cnt++;
		temp = temp->next;
	}
	if (idx > cnt)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
		add_dnodeint(h, n);
	if (idx == cnt)
		add_dnodeint_end(h, n);
	cnt = idx - 1;
	temp = *h;
	while (cnt--)
		temp = temp->next;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
