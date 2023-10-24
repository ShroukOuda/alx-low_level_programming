#include "lists.h"
/**
 * list_len - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
unsigned int list_len(listint_t *head)
{
	unsigned int len = 0;
	listint_t *temp;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
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

	if (index < 1 || index > list_len(head))
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
