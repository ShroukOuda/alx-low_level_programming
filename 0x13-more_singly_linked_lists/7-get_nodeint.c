#include "lists.h"
/**
 * get_nodeint_at_index - check the code.
 * @head: it's a head
 * @index: it's an index
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
