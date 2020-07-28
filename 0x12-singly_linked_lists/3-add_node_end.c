#include "lists.h"
/**
 * add_node_end - add node in the final
 * @head: head to code the list pointer to pointer
 * @str: string to list
 * Return: return to string list
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

	if (i == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (i->next)
		{
			i = i->next;
		}
		i->next = newnode;
	}
	return (newnode);
}

int _strlen(char *s)
{
	int c, length;

	while (s == NULL)
	{
		return (0);
	}

	length = 0;
	for (c = 0; s[c] != '\0'; c++)
		length++;
	return (length);
}
