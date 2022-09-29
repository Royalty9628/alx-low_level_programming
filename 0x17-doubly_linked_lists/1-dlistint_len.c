#include "lists.h"

/**
 * dlistint_len - prints number of nodes of a list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t A;
	const dlistint_int *tmp;

	A = 0;
	if (h == NULL)
		return (0);
	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		A++;
	}
	return (A);
}
