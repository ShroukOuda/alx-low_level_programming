#include "lists.h"
/**
 * insert_nodeint_at_index - check the code.
 * @head: it's a head
 * @idx: it's an idx
 * @n: it's a n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	temp = *head;
	newnode->n = n;
	newnode->next = 0;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (temp && (i < idx))
	{
		if (i != idx - 1)
		{
		temp = temp->next;
		i++;
		}
		else
		{
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
		}
	}
	return (NULL);
}
