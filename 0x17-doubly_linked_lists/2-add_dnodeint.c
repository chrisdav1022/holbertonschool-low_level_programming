#include "lists.h"
/**
 * add_dnodeint - Adds a new node.
 * @head: double pointer to node
 * @n: The number of nodes
 * Return: the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);
	new_n->next = *head;
	new_n->prev = NULL;
	new_n->n = n;

	if (*head != NULL)
		(*head)->prev = new_n;
	*head = new_n;
	return (new_n);
}
