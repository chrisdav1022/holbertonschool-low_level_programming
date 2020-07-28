#include "lists.h"
/**
 * print_listint - print the list integer
 * @h: pointer to list in the struct
 * Return: return the value the size
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
