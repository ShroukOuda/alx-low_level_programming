#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - check the code.
 * @head: it's a head
 * @index: it's an index
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);
	while (temp)
	{
		cnt++;
		temp = temp->next;
	}
	if (index >= cnt)
		return (NULL);
	temp = head;
	cnt = index;
	while (cnt--)
	{
		temp = temp->next;
	}
	return (temp);
}

