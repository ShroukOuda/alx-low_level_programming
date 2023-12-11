#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
