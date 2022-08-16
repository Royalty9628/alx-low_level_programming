#include "lists.h"

/**
 * sum_listint - returns the sull of all the data(n) of a listint_t
 * @head: pointer to the head in the function
 * Return: sum of all the data(n)
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
