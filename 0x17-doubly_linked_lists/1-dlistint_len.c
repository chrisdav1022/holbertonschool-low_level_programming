#include "lists.h"

/**
 * dlistint_len - print number double linked list.
 * @h: pointer to linked
 * Return: counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i;

	for (i = 0; tmp; i++)
		tmp = tmp->next;

	return (i);
}
