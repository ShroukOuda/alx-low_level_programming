#include "lists.h"
/**
 * free_list - check the code.
 * @head: it's a head
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp, *fre;

	temp = head;
	while (temp)
	{
		fre = temp;
		free(fre);
		temp = temp->next;
	}
}
