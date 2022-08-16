#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: double pointer to the list
 * Return: Always success
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
