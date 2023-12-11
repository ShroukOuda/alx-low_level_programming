#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - check the code.
 * @head: it's a head
 * @index: it's an index
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);
	while (temp)
	{
		cnt++;
		temp = temp->next;
	}
	if (index >= cnt)
		return (-1);
	cnt = index;
	temp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = 0;
		free(temp);
		return (1);
	}
	while (cnt--)
		temp = temp->next;
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
