#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the beginning of a list
 * Return: Always success
 */

void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
