#include "lists.h"
/**
 * print_list - print the list
 * @h: pointer to structur
 * Return: return value size
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
