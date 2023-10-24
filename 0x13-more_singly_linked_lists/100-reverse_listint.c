#include "lists.h"
/**
 * reverse_listint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *prev;

	nextnode = *head;
	prev = 0;
	while (nextnode)
	{
		nextnode = nextnode->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = nextnode;
	}
	*head = prev;
	return (*head);
}
