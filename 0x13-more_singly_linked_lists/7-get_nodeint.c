#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head in function
 * @index: the node that will be returned
 * Return: nth node data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; index > n; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
