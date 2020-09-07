#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node of dlistint_t.
 * @head: pointer to get listint
 * @index: index to node
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nd = head;
	unsigned int i = 0;

	for (i = 0; node != NULL && i <= index; i++)
	{
		if (i == index)
			return (nd);
		nd = nd->next;
	}
	return (NULL);
}
