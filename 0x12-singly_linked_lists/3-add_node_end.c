#include "lists.h"

/**
 * _strlen - get the length of a string
 * @s: tring paramenter
 * Return: Always 0
 */

int _strlen(const char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	return (length);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: double pointer to the linked list
 * @str: string to add to the new node
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
