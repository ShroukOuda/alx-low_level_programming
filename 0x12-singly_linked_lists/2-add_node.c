#include "lists.h"
/**
 * add_node - check the code.
 * @head: it's a head
 * @str: it's a str
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *newnode;

	while (str[i])
		i++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = (*head);
	(*head) = newnode;
	return ((*head));
}
