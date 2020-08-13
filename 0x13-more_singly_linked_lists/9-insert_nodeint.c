#include "lists.h"
/**
 * insert_nodeint_at_index - insert the new nodeint in the index
 *@head: pointer to pointer of listint
 *@idx: int to variable
 *@n: second variable
 *Return: the counter
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insert, *temp = *head;

	if (!head)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}

	insert = malloc(sizeof(listint_t));
	if (!insert)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else if (temp)
	{
		insert->next = temp->next;
		temp->next = insert;
	}

	return (insert);
}
