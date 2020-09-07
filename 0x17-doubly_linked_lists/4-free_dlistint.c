#include "lists.h"
/**
 * free_dlistint - Free list.
 * @head: pointer to listint
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
