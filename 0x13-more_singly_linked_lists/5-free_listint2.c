#include "lists.h"
/**
 * free_listint2 - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *fre;

	temp = *head;
	if (head == NULL)
		return;
	*head = NULL;
	while (temp != 0)
	{
		fre = temp;
		temp = temp->next;
		free(fre);
	}
}
