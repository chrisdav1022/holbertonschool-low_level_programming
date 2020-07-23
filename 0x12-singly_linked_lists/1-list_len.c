#include "lists.h"

/**
 * list_len - print number to elements
 * @h: pointer to struct
 * Return: size
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
