#include "lists.h"
/**
 * pop_listint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	temp = *head;
	num = (*head)->n;
	if  (*head == 0)
		return (0);
	*head = (*head)->next;
	free(temp);
	return (num);
}
