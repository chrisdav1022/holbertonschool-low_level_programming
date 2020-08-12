#include "lists.h"
/**
 * pop_listint - check the code
 *@head: double pointer
 *Return: the counter
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *next_node = 0;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = next_node;

	return (i);
}
