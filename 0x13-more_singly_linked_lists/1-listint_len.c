#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the header address
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}