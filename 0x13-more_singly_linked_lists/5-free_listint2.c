#include "lists.h"
/**
 * free_listint2 - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
