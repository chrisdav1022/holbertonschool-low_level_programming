#include "lists.h"
/**
 * add_nodeint_end - add node of int
 * @head: head to list
 * @n: constant int
 * Return: return size
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *i = *head;

	newn = malloc(sizeof(listint_t));

	if (!newn || !head)
	{
		return (NULL);
	}

	newn->n = n;
	newn->next = NULL;

	if (i == NULL)
	{
		*head = newn;
	}
	else
	{
		while (i->next)
		{
			i = i->next;
		}

		i->next = newn;
	}
	return (newn);
}
