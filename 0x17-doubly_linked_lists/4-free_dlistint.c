#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *temp2;

	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
}
