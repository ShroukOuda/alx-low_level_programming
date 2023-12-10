#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - check the code.
 * @head: it's a head
 * @n: it's an int
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	if (*head == NULL)
	{
		newnode->prev = 0;
		*head = newnode;
		return (newnode);
	}
	while (temp->next != 0)
		temp = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
