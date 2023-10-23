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

	if  (*head == 0 || head == 0)
		return (0);
	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (num);
}
