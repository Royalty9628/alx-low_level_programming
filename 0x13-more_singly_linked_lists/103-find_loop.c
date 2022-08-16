#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to the head in function
 * Return: pointer to the beginning of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}

	if (!tortoise || !hare || !hare->next)
		return (NULL);

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (hare);
}
