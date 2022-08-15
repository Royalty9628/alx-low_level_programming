#include "lists.h"

/**
 * print_listint - funtion that prints al the element of a listint_t list
 * @h: list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t A;
	const listint_t *tmp;

	A = 0;
	if (h == NULL)
		return (0);
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		A++;
	}

	return (A);
}
