#include "lists.h"

/**
 * add_nodeint - add the node in list
 * @head: header to list
 * @n: string to list
 * Return: return size
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn = NULL;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
	{
		return (NULL);
	}

	newn->n = n;
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

	while (s == NULL)
	{
		return (0);
	}

	length = 0;
	for (c = 0; s[c] != '\0'; c++)
		length++;
	return (length);
}
