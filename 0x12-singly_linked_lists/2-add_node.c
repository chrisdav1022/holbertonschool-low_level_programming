#include "lists.h"

/**
 * add_node - add the node in list
 * @head: header to list
 * @str: string to list
 * Return: return size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn = NULL;

	newn = malloc(sizeof(list_t));

	if (newn == NULL || head == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		newn->str = strdup(str);
		newn->len = _strlen(newn->str);
	}
	newn->next = *head;
	*head = newn;

	return (newn);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int c, length;

	length = 0;
	for (c = 0; s[c] != '\0'; c++)
		length++;
	return (length);
}
