#include "lists.h"
/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t linked list.
 * @head: The head.
 * Return: Returns the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
