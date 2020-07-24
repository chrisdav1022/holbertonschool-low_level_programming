#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer the free
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
