#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *i = *head;

	newnode = malloc(sizeof(list_t));

	if (!head || !newnode)
	{
		return (NULL);
	}

	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = _strlen(newnode->str);

	if (run == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (i->next)
		{
			i = i->next;
		}
		i->next =newnode;
	}
	return (newnode);
}
