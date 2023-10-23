#include "lists.h"
/**
 * free_listint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != 0)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
}
