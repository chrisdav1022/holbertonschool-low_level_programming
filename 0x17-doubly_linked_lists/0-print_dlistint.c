#include "lists.h"
/**
 * print_dlistint - print double linkked list.
 * @h: pointer to double linked list.
 * Return: return node to linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n;

	for (n = 0; tmp; n++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (n);
}
