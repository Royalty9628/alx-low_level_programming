#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the head in function
 * Return: the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	list = *head;
	*head = list->next;
	n = list->n;
	free(list);
	return (n);
}
