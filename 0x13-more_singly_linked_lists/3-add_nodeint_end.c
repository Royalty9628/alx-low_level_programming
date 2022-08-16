#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: current head address
 * @n: number to fill the nodes
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = new_node;
	return (new_node);
}
