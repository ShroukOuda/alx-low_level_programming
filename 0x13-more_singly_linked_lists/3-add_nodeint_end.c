#include "lists.h"
/**
 * add_nodeint_end - check the code.
 * @head: it's a head
 * @n: it's an int
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
		temp = newnode;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = 0;
		temp = newnode;
	}
	return (temp);
}
