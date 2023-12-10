#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - check the code.
 * @head: it's a head
 * @n: it's an int
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	if (newnode == NULL)
		return (NULL);
	newnode->prev = 0;
	newnode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
