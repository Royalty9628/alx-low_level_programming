#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a list.
 * @head: current head address
 * @n: number to fill the node
 *
 * Return: the adress of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
