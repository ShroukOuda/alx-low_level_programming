#include "lists.h"
/**
 * sum_listint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
