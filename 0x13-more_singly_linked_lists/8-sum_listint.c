#include "lists.h"
/**
 * sum_listint - sum the numbber of the list
 *@head: pointer to the variable
 *Return: return te sum
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	listint_t *j = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		j = head->next;
		head = j;
	}
	return (i);
}
