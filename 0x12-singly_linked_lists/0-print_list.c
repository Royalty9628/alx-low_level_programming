#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int A;

	tmp = h;

	for (A = 0; tmp; A++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (A);
}
