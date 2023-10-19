#include "lists.h"
/**
* add_node_end - check the code.
* @head: it's a head
* @str: it's a str
* Return: Always 0.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *newnode;
	list_t *temp = (*head);

	while (str[i])
		i++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = newnode;
		(*head)->next = NULL;
	}
	else
	{
		while (temp->next == NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
