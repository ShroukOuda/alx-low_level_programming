#include "lists.h"
/**
 * delete_nodeint_at_index - check the code.
 * @head: it's a head
 * @index: it's n index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = *head;
	while (temp && (i < index))
	{
		if (i != index - 1)
		{
		temp = temp->next;
		i++;
		}
		else
		{
	temp->next = temp->next->next;
	temp = temp->next;
	free(temp);
	return (1);
		}
	}
	return (-1);
}
