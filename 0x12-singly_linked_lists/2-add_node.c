#include "lists.h"
/**
 * add_node - add the node in list
 * @head: header to list
 * @str: string to list
 * Return: return size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;

	newn = malloc(sizeof(list_t));

	if (newn == NULL || head == NULL)
	{
		return (NULL);
	}
	newn->str = strdup(str);
	newn->len = _strlen(str);
	newn->next = *head;
	*head = newn;

	return(newn);
}
