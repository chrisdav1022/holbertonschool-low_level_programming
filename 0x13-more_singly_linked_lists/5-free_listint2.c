#include "lists.h"
/**
 * free_listint2 - free the list and null condition
 * @head: double pointer of head to list
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (!head)
	{
		return;
	}

	while (head)
	{
		i = head;
		head = i->next;
		free(i);
	}
}
