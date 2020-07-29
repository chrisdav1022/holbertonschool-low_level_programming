#include "lists.h"
/**
 * free_listint - free the list
 * @head: head to list
 */
void free_listint(listint_t *head)
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
