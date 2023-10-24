#include "lists.h"
/**
 * delete_nodeint_at_index - check the code.
 * @head: it's a head
 * @index: it's n index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = *head->next;
		free(temp);
		return (1);
	}
	while (temp && (i < index))
	{
		if (i != index - 1)
		{
		temp = temp->next;
		i++;
		}
		else
		{
			nextnode = temp->next;
			temp->next = nextnode->next;
			free(nextnode);
	return (1);
		}
	}
	return (-1);
}
