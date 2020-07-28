#include "lists.h"
/**
 * listint_len - print the number of the elements of the list
 * @h: pointer to elements in the list
 * Return: return value the size
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
