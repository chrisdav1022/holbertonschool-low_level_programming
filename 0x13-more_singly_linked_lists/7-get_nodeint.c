#include "lists.h"
/**
 * get_nodeint_at_index - get node int in the index
 *@head: pointer to the variable
 *@index: the index unsigned
 *Return: return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *nodo_i = head;

	if (head == NULL)
		return (0);

	for (; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		nodo_i = head->next;
		head = nodo_i;
	}
	return (nodo_i);
}
