#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node.
 * @head: double pointer to node
 * @n: number to nodes
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_n;
	dlistint_t *t;

	n_n = malloc(sizeof(dlistint_t));
	if (n_n == NULL)
		return (NULL);
	n_n->n = n;
	n_n->next = NULL;
	if (*head == NULL)
	{
		n_n->prev = NULL;
		*head = n_n;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = n_n;
		n_n->prev = t;
	}
	return (n_n);
}
